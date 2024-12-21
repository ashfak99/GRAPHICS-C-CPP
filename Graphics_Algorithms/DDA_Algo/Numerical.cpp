#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    int x1=100,x2=200,y1=200,y2=300,step,xn,yn;
    float dy,dx;

    initgraph(&gd,&gm,"");

    dy=y2-y1;
    dx=x2-x1;
   
    if (abs(dx)>abs(dy))
    {
        step=abs(dx);
    }
    else{
        step=abs(dy);
    }
    
    xn=dx/step;
    yn=dy/step;

    for (int i = 0; i <= step; i++)
    {
        putpixel(x1,y1,WHITE);
        x1+=xn;
        y1+=yn;
    }
    getch();
    return 0;
}
