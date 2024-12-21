#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT ,gm;
    initgraph(&gd,&gm," ");
    line(400,400,450,450);
    line(40*cos(30)-40*sin(30),40*cos(30)+40*sin(30),45*cos(30)-45*sin(30),45*cos(30)+45*sin(30));
    getch();
    return 0;
}
