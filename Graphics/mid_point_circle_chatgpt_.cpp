#include <stdio.h>

// Function to plot points for the 8 symmetric parts of the circle
void plotCirclePoints(int xc, int yc, int x, int y) {
    printf("(%d, %d)\n", xc + x, yc + y);
    printf("(%d, %d)\n", xc - x, yc + y);
    printf("(%d, %d)\n", xc + x, yc - y);
    printf("(%d, %d)\n", xc - x, yc - y);
    printf("(%d, %d)\n", xc + y, yc + x);
    printf("(%d, %d)\n", xc - y, yc + x);
    printf("(%d, %d)\n", xc + y, yc - x);
    printf("(%d, %d)\n", xc - y, yc - x);
}

// Mid-Point Circle Drawing Algorithm
void drawCircle(int xc, int yc, int r) {
    int x = 0;
    int y = r;
    int p = 1 - r; // Initial decision parameter

    // Plot the initial points on the axes
    plotCirclePoints(xc, yc, x, y);

    while (x < y) {
        x++;
        if (p < 0) {
            p = p + 2*x + 1;
        } else {
            y--;
            p = p + 2*(x - y) + 1;
        }
        plotCirclePoints(xc, yc, x, y);
    }
}

int main() {
    int xc, yc, r;

    // Input the center and radius of the circle
    printf("Enter the center of the circle (xc, yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    // Draw the circle
    drawCircle(xc, yc, r);

    return 0;
}
