#include <stdio.h>

// Define region codes
#define INSIDE 0 // 0000
#define LEFT 1   // 0001
#define RIGHT 2  // 0010
#define BOTTOM 4 // 0100
#define TOP 8    // 1000

// Clipping window boundaries
double xmin, ymin, xmax, ymax;

// Function to compute the outcode for a point (x, y)
int computeOutcode(double x, double y) {
    int code = INSIDE;

    if (x < xmin)       // to the left of the clipping window
        code |= LEFT;
    else if (x > xmax)  // to the right of the clipping window
        code |= RIGHT;
    if (y < ymin)       // below the clipping window
        code |= BOTTOM;
    else if (y > ymax)  // above the clipping window
        code |= TOP;

    return code;
}

// Cohen-Sutherland clipping algorithm
void cohenSutherlandClip(double x1, double y1, double x2, double y2) {
    int outcode1 = computeOutcode(x1, y1);
    int outcode2 = computeOutcode(x2, y2);
    int accept = 0;

    while (1) {
        if ((outcode1 | outcode2) == 0) { 
            // Trivial accept: both endpoints inside the clipping region
            accept = 1;
            break;
        } else if (outcode1 & outcode2) { 
            // Trivial reject: both endpoints share an outside zone
            break;
        } else {
            // Need to clip the line
            double x, y;
            int outcodeOut = outcode1 ? outcode1 : outcode2;

            if (outcodeOut & TOP) { 
                // Point is above the clipping window
                x = x1 + (x2 - x1) * (ymax - y1) / (y2 - y1);
                y = ymax;
            } else if (outcodeOut & BOTTOM) { 
                // Point is below the clipping window
                x = x1 + (x2 - x1) * (ymin - y1) / (y2 - y1);
                y = ymin;
            } else if (outcodeOut & RIGHT) { 
                // Point is to the right of the clipping window
                y = y1 + (y2 - y1) * (xmax - x1) / (x2 - x1);
                x = xmax;
            } else if (outcodeOut & LEFT) { 
                // Point is to the left of the clipping window
                y = y1 + (y2 - y1) * (xmin - x1) / (x2 - x1);
                x = xmin;
            }

            // Replace the point outside the window with the intersection point
            if (outcodeOut == outcode1) {
                x1 = x;
                y1 = y;
                outcode1 = computeOutcode(x1, y1);
            } else {
                x2 = x;
                y2 = y;
                outcode2 = computeOutcode(x2, y2);
            }
        }
    }

    if (accept) {
        // The line was accepted and clipped, now we can draw it
        printf("Line accepted from (%.2f, %.2f) to (%.2f, %.2f)\n", x1, y1, x2, y2);
    } else {
        printf("Line rejected\n");
    }
}

int main() {
    // Define clipping window
    xmin = 10.0;
    ymin = 10.0;
    xmax = 30.0;
    ymax = 30.0;

    // Define a line segment
    double x1 = 5.0, y1 = 5.0;
    double x2 = 35.0, y2 = 35.0;

    // Perform clipping
    cohenSutherlandClip(x1, y1, x2, y2);

    return 0;
}
