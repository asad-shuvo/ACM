
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
     int gd = DETECT, gm;
    /* initialization of graphic mode */
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, RED);
    floodfill(60,60,YELLOW);
    line(300,100,200, 200);
    line(300,100,400, 200);
    line(200,200,400, 200);
     getch();
    closegraph();
    return 0;

}
