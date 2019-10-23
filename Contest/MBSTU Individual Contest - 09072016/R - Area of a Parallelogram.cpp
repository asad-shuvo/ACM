#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,test;
    int i=0;
    scanf("%d",&test);
    while(test--){
            i++;
    scanf("%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
     Dx=(Ax+Cx-Bx);
     Dy=(Ay+Cy-By);
    int area=((Ax*By)-(Ay*Bx)+(Bx*Cy)-(By*Cx)+(Cx*Dy)-(Cy*Dx)+(Dx*Ay)-(Dy*Ax))/2;
    if(area<0){
         printf("Case %d: %d %d %d\n",i,Dx,Dy,area*-1);
    }
    else
    printf("Case %d: %d %d %d\n",i,Dx,Dy,area);
    }
    return 0;
}
