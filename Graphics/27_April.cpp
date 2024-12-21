#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    //triangle before translation
    line(75,25,50,100);
    line(50,100,100,100);
    line(100,100,75,25);

    // triangle after translation
    line(300,200,275,275);
    line(275,275,325,275);
    line(300,200,325,275);
    getch();
    return 0;
}
