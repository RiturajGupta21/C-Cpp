 #include <graphics.h>
 #include <conio.h>

 void main()
  {

    int gd = DETECT , gm ;
    initgraph (& gd , & gm , "C: \\TC \\ BGI" );
    sector (200 , 200 , 0 , 150 , 25, 50 );
    getch ();
    closegraph () ;

  }
