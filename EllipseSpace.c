#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	for(i=5;i<=200;i+=7)
	{
		ellipse(320,220,0,360,150,i);
	}
	for(i=5;i<=200;i+=7)
	{
		ellipse(320,220,0,360,i,150);
	}
getch();
	closegraph();
}
