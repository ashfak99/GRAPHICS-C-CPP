#include<iostream>
#include<graphics.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(3);
    circle(150,150,100);
    ellipse(150,200,180,360,70,20);
    ellipse(100,100,0,360,30,10);
    ellipse(200,100,0,360,30,10);
    
    getch();
    return 0;
}
