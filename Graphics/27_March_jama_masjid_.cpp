#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");
    rectangle(60,78,90,338);
    rectangle(60,78,90,83.2);
    rectangle(60,156,90,161.2);
    rectangle(60,247,90,252.3);
    line(60,312,90,312);

    //vertical line of gumbad
    line(66,252.3,66,312);
    line(72,252.3,72,312);
    line(78,252.3,78,312);
    line(84,252.3,84,312);

    line(66,161.2,66,247);
    line(72,161.2,72,247);
    line(78,161.2,78,247);
    line(84,161.2,84,247);

    line(60,83.2,90,83.2);
    rectangle(66,83.2,84,88.4);
    line(66,88.4,66,156);
    line(72,88.4,72,156);
    line(78,88.4,78,156);
    line(84,88.4,84,156);

    //left gumbad upper part
    rectangle(60,62.4,90,78);
    line(70,70.2,70,78);
    line(80,70.2,80,78);

    arc(65,70.2,0,180,5);
    arc(75,70.2,0,180,5);
    arc(85,70.2,0,180,5);
    ellipse(75,62.4,0,180,15,23.8);
    arc(75,44.2,180,360,7.5);
    line(75,26,75,40);
    getch();
    return 0;
}
