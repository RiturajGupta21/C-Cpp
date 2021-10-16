#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	outtextxy(220,110,"elipse");
	ellipse(180,200,0,360,100,50);
	fillellipse(400,200,100,50);
getch();
	closegraph();
}
