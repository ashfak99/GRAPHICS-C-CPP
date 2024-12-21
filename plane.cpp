#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    for ( int i = 1; i < 400; i++)
    {/*
        line(10,400,3000,400);
        circle(60+i,290,30);
        line(30+i,360,90+i,360);
        line(30+i,360,60+i,320);
        line(90+i,360,60+i,320);
        line(50+i,360,50+i,400);
        line(70+i,360,70+i,400);
        for (int i = 0; i < 400; i--)
        {
            circle(480,290,30);
            delay(30);
            cleardevice();
        }*/
        line(100+i,100,100+i,130);
        line(100+i,100,200+i,100);
        line(100+i,130,200+i,130);
        ellipse(200+i,115,270,90,30,15);

        

        delay(4);
        cleardevice();
    }
   /* for (int i = 400; i <430; i++)
    {
        circle(460,290,30);

    }*/
    
    
    getch();
    closegraph();
    
    
    return 0;
}
