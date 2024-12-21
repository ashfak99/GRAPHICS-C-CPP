// #include<graphics.h>
// #include<stdlib.h>
// #include<stdio.h>
// #include<conio.h>
// int main(int argc, char const *argv[])
// {
//     int gd=DETECT,gm,errorcode;
//     int maxx,maxy;
//     int poly[10];
//     initgraph(&gd,&gm,"");
//     errorcode=graphresult();
//     if (errorcode!=grOk)
//     {
//         printf("Graphics error : %s\n",grapherrormsg(errorcode));
//         printf("Press any key to halt: ");
//         getch();
//         exit(1);
//     }
//     maxx=getmaxx();
//     maxy=getmaxy();
//     poly[0]=20;
//     poly[1]=maxy/2;
//     poly[2]=maxx-20;
//     poly[3]=20;
//     poly[4]=maxx-50;
//     poly[5]=maxy-20;
//     poly[6]=maxx/2;
//     poly[7]=maxy/2;

//     poly[8]=poly[0];
//     poly[9]=poly[1];

//     fillpoly(5,poly);
//     getch();
//     closegraph();
//     return 0;
// }


// #include<graphics.h>
// #include<stdlib.h>
// #include<stdio.h>
// #include<conio.h>
// int main(int argc, char const *argv[])
// {
//     int gd=DETECT,gm,errorcode;
//     struct arccoordstype arcinfo;
//     int midx,midy;
//     int stangle=45,endangle=270;
//     char sstr[80],estr[80];
//     initgraph(&gd,&gm,"");
//     errorcode=graphresult();
//     if (errorcode!=grOk)
//     {
//         printf("Graphics error: %s\n",grapherrormsg(errorcode));
//         printf("Press any key to halt: ");
//         getch();
//         exit(1);
//     }
//     midx=getmaxx()/2;
//     midy=getmaxy()/2;
//     setcolor(getmaxcolor());
//     arc(midx,midy,stangle,endangle,100);
//     getarccoords(&arcinfo);
//     sprintf(sstr,"*- (%d, %d)",arcinfo.xstart,arcinfo.ystart);
//     sprintf(estr,"*-(%d, %d)",arcinfo.xend,arcinfo.yend);
//     outtextxy(arcinfo.xstart,arcinfo.ystart,sstr);
//     outtextxy(arcinfo.xend,arcinfo.yend,estr);
//     getch();
//     closegraph();
//     return 0;
// }

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int maxx,maxy,gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    maxx=getmaxx();
    maxy=getmaxy();
    
    return 0;
}
