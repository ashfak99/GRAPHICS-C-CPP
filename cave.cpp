#include<stdio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int i;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
   /* for (int i = 0; i < 500; i++)
    {
        delay(5);
        setcolor(i/50);
        arc(i-10,i-10,0,180,i-10);
        
    }
    for (int i = 0; i < 300; i++)
    {
        delay(5);
        setcolor(i/50);
        circle(i+10,i-10,i-10);
    }*/
    for (int i = 0; i < 5000; i++)

    {
        line(100+i,50,100+i,100);
        ellipse(100+i,75,90,270,100,25);
        circle(105+i,75,5);
        ellipse(105+i,45,0,360,3,25);
        ellipse(105+i,100,0,360,3,25);
        line(90+i,100,90+i,175);
        line(40+i,95,40+i,175);
        setcolor(i/20);
        rectangle(40+i,175,90+i,200);
        delay(50);
        cleardevice();
    }
    
    
    getch();
    closegraph();
    return 0;
}
