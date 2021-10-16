#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	//cleardevice();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	outtextxy(23,23,"circle");
	setcolor(3);
	circle(300,225,100);
	floodfill(300,225,CYAN);
getch();
	closegraph();
}
