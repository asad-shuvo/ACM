#include <stdio.h>
int main()
{
    int i,j,k,l,m,n;
    for(i=1;;i++)
    {
    scanf("%d",&n);
    if(n==0)
        break;
    l=n/2;
    printf("Case %d: %d\n",i,l);
}
}
