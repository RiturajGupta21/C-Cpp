#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\turboc3\\bgi");
  cleardevice();
  bar ( 100 , 150 , 250 , 200 );
  getch();
  closegraph();
}
