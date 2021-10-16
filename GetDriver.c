#include<graphics.h>
 #include<conio.h>
 main()
 {
    int gd = DETECT , gm ;
 char * drivername;
 initgraph( &gd , & gm, "C: \\ TC \\ BGI") ;
 drivername = getdrivername() ;
 outtextxy(200 , 200 , drivername) ;
 getch() ;
 closegraph() ;
 return 0 ; 

 }
