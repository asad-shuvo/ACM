#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(n=1;n<=t;n++)
    {
    scanf("%d%d",&i,&j);
    if(j>i)
        printf("impossible\n");

    else if((i+j)%2==0){
       k=(i+j)/2;

    l=i-k;
    printf("%d %d\n",k,l);
}
else
    printf("impossible\n");
}
return 0;
}
