#include <graphics.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    
    int x, y;
    setbkcolor(WHITE);
    cleardevice();
    setcolor(GREEN);
 
    x = getmaxx() / 2;
    y = getmaxy() / 2;
 
    setviewport(x - 50, y - 50, x + 50, y + 50, 1);

    circle(50, 50, 50);

    setviewport(0, 0, getmaxx(), getmaxy(), 1);

    setcolor(RED);  
    rectangle(x - 50, y - 50, x + 50, y + 50);

    getch();
    closegraph();
    return 0;
}
