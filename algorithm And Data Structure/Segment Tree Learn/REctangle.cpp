#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
   int gd = DETECT,gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   setcolor(RED);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(60,60,YELLOW);
   /* Draw rectangle on screen */
   rectangle(150, 50, 400, 150);

   /* Draw Bar on screen */
   bar(150, 200, 400, 350);

   getch();
   closegraph();
   return 0;
}
