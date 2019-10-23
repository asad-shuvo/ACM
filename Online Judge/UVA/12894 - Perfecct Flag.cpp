#include <bits/stdc++.h>
using namespace std;
int main()
{
    int xo,yo,x1,y1,c1,c2,L,W,L1,W1,r,r1,c3,c4,test;
    scanf("%d",&test);
    while(test--){

    scanf("%d%d%d%d%d%d%d",&xo,&yo,&x1,&y1,&c1,&c2,&r);
    L=x1-xo;
    W=y1-yo;
    L1=L/10;
    W1=W/6;
    r1=r*5;
    c3=2*(c1-xo)+L1;
    c4=2*(c2-yo);
 //  printf("L=%d W=%d L1=%d W1=%d r1=%d c3=%d c4=%d",L,W,L1,W1,r1,c3,c4);
    if(((r*5)==L) && (L1==W1) && (c3==L) && (c4==W)){
    printf("YES\n");
    }
    else
        printf("NO\n");
}
return 0;
}
