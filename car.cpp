#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    for (int i = 0; i < getmaxx(); i++)
    {
        /* code */
        circle(0+i,250,50);
        delay(5);
        cleardevice();
    }
    
    getch();
    closegraph();
    return 0;
}
