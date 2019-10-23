#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(n=1; n<=t; n++)
    {
        scanf("%d:%d",&i,&j);
        if(i==12 && j==0)
        {
            k=12;
            l=0;
        }
        else if(i<12 && j==0)
        {
            k=12-i;
            l=0;
        }
        else if(i==12 && j!=0)
        {
            k=12-1;
            l=60-j;
        }
        else if(i<12 && j>0)
        {
            k=(12-i)-1;
            l=60-j;
        }
        if(k==0)
        {
            k=12;
        }
        printf("%02d:%02d\n",k,l);

    }
    return 0;
}
