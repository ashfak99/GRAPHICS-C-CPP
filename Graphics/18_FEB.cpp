// #include<stdio.h>
// #include<conio.h>
// #include<graphics.h>
// int main(int argc, char const *argv[])
// {
//     int gd=DETECT,gm;
//     initgraph(&gd,&gm,"");
//     int x=200;
//     line(0,200,100,200);
//     line(100,200,50,100);
//     line(50,100,0,200);
//     line(0+x,200+x,100+x,200+x);
//     line(100+x,200+x,50+x,100+x);
//     line(50+x,100+x,0+x,200+x);
//     getch();
//     return 0;
// }


#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm,x,y;
    initgraph(&gd,&gm," ");
    x=getmaxx();
    y=getmaxy();
    printf("%d\n",x);
    printf("%d",y);
    getch();
    return 0;
}
