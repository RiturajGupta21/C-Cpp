#include<conio.h>
#include<graphics.h>
void main()
{
	int i,j,gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	//putpixel(200,200,RED);
	outtextxy(23,23,"rectangle");
	rectangle(40,40,100,100);
	for(i=42;i<100;i+=2)
	{
		for(j=42;j<100;j+=2)
		putpixel(i,j,RED);
	}
getch();
	closegraph();
}
