#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT, gm,i;
    initgraph(&gd,&gm,"");
    for(i=0;i<500;i++)
    {
    line(80,150,80,400);
    line(220,150,220,400);
    ellipse(150,150,0,80,75,80);
    ellipse(150,150,100,180,75,80);
    ellipse(150,70,180,360,13,10);
    ellipse(150,150,180,360,75,60);
    ellipse(150,145,180,360,75,50);
    
        ellipse(150,100+i,180,360,10,10);
        ellipse(150,100+i,0,180,10,20);
        ellipse(150,75+i,180,360,10,10);
        ellipse(150,75+i,0,180,10,20);
        delay(30);
        cleardevice();
        
    }
    
    getch();
    closegraph();
    return 0;
}
