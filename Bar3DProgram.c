#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\turboc3\\bgi");
  cleardevice();
  bar3d(100 , 100 , 200 , 200 , 20 , 1) ;
  getch();
  closegraph();
}
