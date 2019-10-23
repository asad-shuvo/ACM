#include <stdio.h>
int main()
{
    int i,j,k,l,t,n;
    scanf("%d",&t);
    for(n=1; n<=t; n++)
    {
        scanf("%d:%d",&i,&j);
        k=12-i;
        l=60-j;
        if(l>0)
            k=k-1;
        if(i==12 && j!=0)
            k=12-1;
     if(j==0)
        {
            l=0;
            k=12-1;
        }
    if(i==12 && j==0)
            k=12;
        printf("%02d:%02d\n",k,l);
    }
    return 0;
}
