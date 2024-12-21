#include <stdio.h>
#include <graphics.h>
#include <math.h>

// Function to round up interval for scaling
int RoundUpInterval(int value) {
    return (int)(ceil(value / 10.0) * 10);
}

// Function to convert integer to string
void IntegerToString(int num, char *str) {
    sprintf(str, "%d", num);  // Convert int to string
}

// Function to plot a graph
void GraphPlot(int n, int vx[], int vy[], char *sx, char *sy) {
    int xmax = vx[0], ymax = vy[0];
    int xinterval, yinterval;
    char s[10];  // String buffer for numbers
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLUE);

    // Find maximum values in the data for scaling
    for (int i = 1; i < n; i++) {
        if (vx[i] > xmax) xmax = vx[i];
        if (vy[i] > ymax) ymax = vy[i];
    }

    // Calculate intervals for x and y axes
    xinterval = RoundUpInterval(xmax / 10);
    yinterval = RoundUpInterval(ymax / 10);

    // Draw X and Y axes
    line(50, getmaxy() - 50, getmaxx() - 50, getmaxy() - 50);  // X-axis
    line(50, 50, 50, getmaxy() - 50);  // Y-axis

    // Draw X-axis labels and grid
    for (int i = 1; i <= 10; i++) {
        int x = 50 + i * ((getmaxx() - 100) / 10);
        line(x, getmaxy() - 50, x, getmaxy() - 45);  // X-axis tick
        IntegerToString(i * xinterval, s);  // Convert interval to string
        outtextxy(x - 10, getmaxy() - 40, s);  // X-axis label
    }

    // Draw Y-axis labels and grid
    for (int i = 1; i <= 10; i++) {
        int y = getmaxy() - 50 - i * ((getmaxy() - 100) / 10);
        line(50, y, 55, y);  // Y-axis tick
        IntegerToString(i * yinterval, s);  // Convert interval to string
        outtextxy(10, y - 5, s);  // Y-axis label
    }

    // Draw the graph line
    for (int i = 0; i < n - 1; i++) {
        int x1 = 50 + (vx[i] * (getmaxx() - 100)) / (xinterval * 10);
        int y1 = getmaxy() - 50 - (vy[i] * (getmaxy() - 100)) / (yinterval * 10);
        int x2 = 50 + (vx[i + 1] * (getmaxx() - 100)) / (xinterval * 10);
        int y2 = getmaxy() - 50 - (vy[i + 1] * (getmaxy() - 100)) / (yinterval * 10);
        line(x1, y1, x2, y2);  // Draw line between two points
    }

    // Draw X-axis and Y-axis labels
    outtextxy(getmaxx() - 70, getmaxy() - 30, sx);  // X-axis label
    outtextxy(20, 20, sy);  // Y-axis label

    // Wait for the user to press a key and close the graphics window
    getch();
    closegraph();
}

int main() {
    int vx[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};  // X-values
    int vy[] = {5, 15, 25, 35, 50, 65, 75, 85, 90, 100};   // Y-values
    int n = sizeof(vx) / sizeof(vx[0]);  // Number of points

    GraphPlot(n, vx, vy, "X-Axis", "Y-Axis");

    return 0;
}
