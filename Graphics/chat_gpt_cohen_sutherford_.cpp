#include <stdio.h>

#define INSIDE 0 // 0000
#define LEFT   1 // 0001
#define RIGHT  2 // 0010
#define BOTTOM 4 // 0100
#define TOP    8 // 1000

// Define the clipping window
const int x_min = 10, y_min = 10, x_max = 200, y_max = 150;

// Function to compute the region code for a point (x, y)
int computeCode(int x, int y) {
    int code = INSIDE;

    if (x < x_min)       // to the left of rectangle
        code |= LEFT;
    else if (x > x_max)  // to the right of rectangle
        code |= RIGHT;
    if (y < y_min)       // below the rectangle
        code |= BOTTOM;
    else if (y > y_max)  // above the rectangle
        code |= TOP;

    return code;
}

// Function to perform the Cohen-Sutherland clipping
void cohenSutherlandClip(int x1, int y1, int x2, int y2) {
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);

    int accept = 0;

    while (1) {
        if ((code1 == 0) && (code2 == 0)) {
            // Both points inside the rectangle
            accept = 1;
            break;
        } else if (code1 & code2) {
            // Both points share an outside region
            break;
        } else {
            // Some segment lies within the rectangle
            int code_out;
            int x, y;

            // Pick at least one point outside the rectangle
            if (code1 != 0)
                code_out = code1;
            else
                code_out = code2;

            // Find the intersection point
            if (code_out & TOP) {
                x = x1 + (x2 - x1) * (y_max - y1) / (y2 - y1);
                y = y_max;
            } else if (code_out & BOTTOM) {
                x = x1 + (x2 - x1) * (y_min - y1) / (y2 - y1);
                y = y_min;
            } else if (code_out & RIGHT) {
                y = y1 + (y2 - y1) * (x_max - x1) / (x2 - x1);
                x = x_max;
            } else if (code_out & LEFT) {
                y = y1 + (y2 - y1) * (x_min - x1) / (x2 - x1);
                x = x_min;
            }

            // Replace the point outside the rectangle
            if (code_out == code1) {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            } else {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }

    if (accept) {
        printf("Line accepted from (%d, %d) to (%d, %d)\n", x1, y1, x2, y2);
    } else {
        printf("Line rejected\n");
    }
}

int main() {
    // Example usage:
    int x1 = 5, y1 = 5, x2 = 150, y2 = 150;
    cohenSutherlandClip(x1, y1, x2, y2);

    return 0;
}
