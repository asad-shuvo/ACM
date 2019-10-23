#include <stdio.h>
int main()
{
    int i,j,n,max=0,m,p,k,t;
    while(scanf("%d%d",&i,&j)==2 && i>0 && j>0){
            printf("%d %d",i,j);
        if(i>j)

        {
            t=i;
            i=j;
            j=t;

        }
            max=0;
    for(m=i;m<=j;m++)
    {
        p=1;
        k=m;
        while(k!=1)
        {
        if(k%2!=0)
        {
            k=3*k+1;
        }
        else
        {
            k=k/2;
        }
        p++;
    }
    if(p>=max)
    {
        max=p;
    }
   // y++;
    }
    printf(" %d\n",max);
    }
}
