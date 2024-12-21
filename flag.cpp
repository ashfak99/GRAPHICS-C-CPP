#include<stdio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    for(int i=0; i<2000;i++)
    {
    rectangle(50+i,50,200+i,200);
    line(50+i,100,200+i,100);
    line(50+i,150,200+i,150);
    circle(125+i,125,25);
    line(125+i,100,125+i,150);
    line(100+i,125,150+i,125);
    delay(30);
    cleardevice();
    }
    
    getch();
    closegraph();
    return 0;
}
