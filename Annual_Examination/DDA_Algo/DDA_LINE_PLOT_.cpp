#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    float x1=20,y1=10,x2=300,y2=180;
    float dx=x2-x1,dy=y2-y1,step;
    float xIncrmt,yIncrmt;
    if (dx>dy)
        step=dx;
    else
    step=dy;
    xIncrmt=dx/step;
    yIncrmt=dy/step;
    for (int i = 0; i <= step; i++)
    {
        putpixel(x1,y1,10);
        x1+=xIncrmt;
        y1+=yIncrmt;
        delay(10);
    }
    getch();
    return 0;
}
