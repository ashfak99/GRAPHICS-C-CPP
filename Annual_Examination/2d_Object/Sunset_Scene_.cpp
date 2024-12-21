#include <graphics.h>
#include <conio.h>
#include <dos.h> // For delay()

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int sunX = 300, sunY = 100; // Initial position of the sun
    int sunRadius = 30;         // Radius of the sun

    for (int i = 0; i < 100; i++) {
        // Clear the screen
        cleardevice();

        // Draw the sky
        setcolor(BLUE);
        setfillstyle(SOLID_FILL, BLUE);
        bar(0, 0, 640, 480); // The entire screen as the sky

        // Change the sky color to orange as the sun sets
        if (i > 50) {
            setfillstyle(SOLID_FILL, LIGHTRED);
            bar(0, 0, 640, 240); // Upper half of the sky turns orange
        }

        // Draw the sun
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        fillellipse(sunX, sunY, sunRadius, sunRadius);

        // Draw the ground
        setcolor(GREEN);
        setfillstyle(SOLID_FILL, GREEN);
        bar(0, 400, 640, 480); // Ground at the bottom of the screen

        // Animate the sun moving downward
        sunY += 2; // Move the sun down slowly

        // Delay to make the animation smooth
        delay(100);
    }

    // Display a message after sunset
    outtextxy(250, 240, "Sunset Complete!");

    getch();
    closegraph();
    return 0;
}
