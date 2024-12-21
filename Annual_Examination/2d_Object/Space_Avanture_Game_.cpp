#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Spaceship position
    int shipX = 250, shipY = 400;
    int asteroidX, asteroidY = 0;
    int asteroidSpeed = 5; // Speed of the falling asteroid

    // Initialize asteroid position
    asteroidX = rand() % 500; // Random position along the X-axis

    while (1) {
        // Clear the screen
        cleardevice();

        // Draw the spaceship
        rectangle(shipX, shipY, shipX + 30, shipY + 30); // A simple square spaceship

        // Draw the asteroid
        circle(asteroidX, asteroidY, 20); // Asteroid as a circle

        // Move the asteroid down
        asteroidY += asteroidSpeed;
        if (asteroidY > 480) { // If it reaches the bottom, reset position
            asteroidY = 0;
            asteroidX = rand() % 500;
        }

        // Check for collision
        if (asteroidY + 20 >= shipY && asteroidX >= shipX && asteroidX <= shipX + 30) {
            outtextxy(200, 240, "Game Over!");
            break;
        }

        // Handle player input for spaceship movement
        if (kbhit()) {
            char ch = getch();
            if (ch == 75) { // Left arrow key
                shipX -= 20;
            } else if (ch == 77) { // Right arrow key
                shipX += 20;
            }
        }

        // Delay for smooth animation
        delay(50);
    }

    getch();
    closegraph();
    return 0;
}
