#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<cmath>

int abs (int n)
{
	return ( (n>0) ? n : ( n * (-1)));
}

void DDA(int X0, int Y0, int X1, int Y1)
{
	int dx = X1 - X0;
	int dy = Y1 - Y0;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	float X = X0;
	float Y = Y0;
	for (int i = 0; i <= steps; i++)
	{
	    X=round(X);
	    Y=round(Y);
		putpixel (X,Y,RED);
		X += Xinc;
		Y += Yinc;
		delay(100);

	}
}


int main()
{
	int gd = DETECT, gm;

	initgraph (&gd, &gm, "");

	int X0 = 300, Y0 = 100, X1 = 200, Y1 = 200;
	DDA(X0, Y0, X1, Y1);
	getch();
    closegraph();
    return 0;
	return 0;
}
