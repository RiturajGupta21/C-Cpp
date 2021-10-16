#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	outtextxy(23,23,"multiple line programme");
	for(i=200;i<400;i=i+10)
	{
		line(i,100,i,300);
	}
	for(j=110;j<300;j=j+10)
	{
		line(190,j,400,j);
	}
getch();
	closegraph();
}
