#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm; 
    initgraph(&gd,&gm,"");
    dda_algo(100,100,200,100);
    return 0;
}
void dda_algo(int x,int y,int x2,int y2){
    int dx,dy,xinc,yinc,step,i;
    dx=x2-x;
    dy=y2-y;

    if (abs(dx)>abs(dy))
    {
        step=abs(dx);
    }
    else{
        step=abs(dy);
    }
    xinc=dx/step;
    yinc=dy/step;
    for ( i = 0; i <= step; i++)
    {
        putpixel(x,y,15);
        delay(100);
        x+=xinc;
        y+=yinc;
    }
    
}