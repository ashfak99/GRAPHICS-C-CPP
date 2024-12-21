#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"");
    getbkcolor();
    bar(100,100,200,200);
    setbkcolor(RED);
    getch();
}
