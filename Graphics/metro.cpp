#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{ 
    int gd=DETECT, gm;
    initgraph(&gd,&gm," ");
 for(int i=0; i<=getmaxx()+100; i++)
  {
    //metro bogie
    setcolor(12);
    setfillstyle(SOLID_LINE,LIGHTGREEN);
    setbkcolor(1);
    //floodfill(i,50,1);
    rectangle(70+i,100,220+i,180);
    rectangle(85+i,120,100+i,160);
    rectangle(190+i,120,205+i,160);
    rectangle(110+i,130,180+i,150);
    rectangle(88+i,130,97+i,140);
    rectangle(193+i,130,203+i,140);
    line(123+i,130,123+i,150);
    line(146+i,130,146+i,150);
    line(169+i,130,169+i,150);

    rectangle(230+i,100,380+i,180);
    rectangle(245+i,120,260+i,160);
    rectangle(350+i,120,365+i,160);
    rectangle(270+i,130,340+i,150);
    rectangle(248+i,130,257+i,140);
    rectangle(353+i,130,363+i,140);
    line(283+i,130,283+i,150);
    line(306+i,130,306+i,150);
    line(329+i,130,329+i,150);

    arc(225+i,100,0,180,5);
    arc(225+i,180,180,360,5);

//  metro engine front
    line(390+i,100,390+i,180);
    line(390+i,180,490+i,180);
    line(390+i,165,490+i,165);
    line(490+i,165,490+i,180);
    line(390+i,100,405+i,100);
    line(405+i,100,490+i,165);
    line(405+i,115,423+i,115);
    line(405+i,115,405+i,150);
    line(405+i,150,468+i,150);
    arc(385+i,100,0,180,5);
    arc(385+i,180,180,360,5);

    //metro engine back
    line(60+i,100,60+i,180);
    line(-40+i,180,60+i,180);
    line(-40+i,165,60+i,165);
    line(-40+i,165,-40+i,180);
    line(60+i,165,60+i,180);
    line(45+i,100,60+i,100);
    line(45+i,100,-40+i,165);
    line(27+i,115,45+i,115);
    line(45+i,115,45+i,150);
    line(-18+i,150,45+i,150);
    arc(65+i,100,0,180,5);
    arc(65+i,180,180,360,5); 
    settextstyle(9,0,5);

    //Piller
    rectangle(0,170,639,220);
    arc(80,220,270,0,80);
    outtextxy(220,240,"FIZZA METRO");
    delay(5);
    cleardevice();
  }
    getch();
    return 0;
}
