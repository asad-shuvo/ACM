#include<stdio.h>
int main()
{
    int i,j,k,l,m,s,p;
    scanf("%d%d%d",&i,&j,&k);
    while(l<k)
    {
        l=(i+j)/k;
        if(l>=k)
            l=i/k;
        printf("%d\n",l);
    }
}
