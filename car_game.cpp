#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    ellipse(300,200,270,0,40,60);
    ellipse(280,180,270,0,30,50);
    line(320,180,300,280);

    getch();
    return 0;
}

