#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    
    setbkcolor(WHITE);
    cleardevice();

    setcolor(RED);
    rectangle(100,200,300,400);

    line(100,200,200,50);
    line(200,50,300,200);
    line(300,200,100,200);

    rectangle(175,300,225,400);

    rectangle(120,225,160,275);
    rectangle(240,224,280,275);

    circle(200,135,15);
    getch();
    return 0;
}
