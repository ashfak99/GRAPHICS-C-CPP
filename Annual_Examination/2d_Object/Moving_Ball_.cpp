#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    int radius=30;
    initgraph(&gd, &gm, "");
    for (int i = 0; i <= 550-radius-20; i++)
    {
    setbkcolor(WHITE);
    cleardevice();
    setcolor(RED);

    line(0,300,600,300);
    rectangle(0,270,10,300);
    rectangle(590,270,600,300);

      
    circle(12+radius+i,300-radius,radius);

    setcolor(BLUE);
    outtextxy(250,350,"Moving Ball");
    delay(5);
    }

    getch();
    return 0;
}
