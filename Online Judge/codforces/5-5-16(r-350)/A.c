#include <stdio.h>
int main()
{
    int n,m,r,i,j,k,max,min;
    while(scanf("%d",&n)==1){
    r=n%7;
    m=n/7;
    if(r==0){
        max=m*2;
        min=m*2;
    }
   else if(r==1)
    {
        max=m*2+1;
        min=m*2;
    }
    else if(r==6)
    {
        max=m*2+2;
        min=m*2+1;
    }
    else
    {
        max=m*2+2;
        min=m*2;
    }
    printf("%d %d\n",min,max);
}
return 0;
}
