 #include<conio.h>
 #include<stdio.h>
 #include<graphics.h>
 void main()
  {
   int gd = DETECT , gm ,i;
   initgraph(& gd,&gm,"");
   for(i=0;i<100;i++)
    {
     putpixel(50+i,250+i,WHITE);
    }
   getch();
   closegraph();
  }
