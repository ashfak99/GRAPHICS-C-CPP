#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    int x1=10,y1=100,x2=630,y2=450,i,step,xn,yn,dx,dy;
    initgraph(&gd,&gm," ");
    dx=x2-x1;
    dy=y2-y1;
    if (abs(dx)>abs(dy))
    {
        step=abs(dx);
    }
    else
    {
        step=abs(dy);
    }
    xn=dx/step;
    yn=dy/step;
    for ( i = 0; i <= step; i++)
    {
        putpixel(x1,y1,LIGHTGREEN);
        delay(5);
        x1+=xn;
        y1+=yn;
    }
    getch();
    closegraph();
    return 0;
}
