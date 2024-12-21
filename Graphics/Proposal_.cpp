#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

void drawBoy(int x, int y) {
    // Draw the body of the boy
    setcolor(RED);
    rectangle(x, y, x + 50, y + 100);
    floodfill(x + 25, y + 50, RED);

    // Draw the head
    setcolor(YELLOW);
    circle(x + 25, y - 10, 15);
    floodfill(x + 25, y - 10, YELLOW);

    // Draw the legs
    setcolor(BLUE);
    line(x + 10, y + 100, x, y + 150);
    line(x + 40, y + 100, x + 50, y + 150);

    // Draw arms
    line(x, y + 50, x - 20, y + 80); // Left arm
    line(x + 50, y + 50, x + 70, y + 80); // Right arm
}

void drawGirl(int x, int y) {
    // Draw the body of the girl
    setcolor(RED);
    rectangle(x, y, x + 50, y + 100);
    floodfill(x + 25, y + 50, RED);

    // Draw the head
    setcolor(YELLOW);
    circle(x + 25, y - 10, 15);
    floodfill(x + 25, y - 10, YELLOW);

    // Draw the legs
    setcolor(BLUE);
    line(x + 10, y + 100, x, y + 150);
    line(x + 40, y + 100, x + 50, y + 150);

    // Draw arms
    line(x, y + 50, x - 20, y + 80); // Left arm
    line(x + 50, y + 50, x + 70, y + 80); // Right arm
}

void drawProposalScene() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw boy and girl
    drawBoy(100, 100);
    drawGirl(300, 100);

    // Draw the heart and proposal message
    setcolor(RED);
    circle(200, 100, 30); // Heart (simple)
    floodfill(200, 100, RED);

    setcolor(WHITE);
    outtextxy(180, 140, "Will you marry me?");

    getch();
    closegraph();
}

int main() {
    drawProposalScene();
    return 0;
}
