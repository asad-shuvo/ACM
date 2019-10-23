#include <stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    int k,p,G,L,gcd,lcm,a,b,c,t,test;
    scanf("%d",&test);
    while(test--)
    {
    scanf("%d%d",&G,&L);
    k=G;
    p=L;
    if(L%G==0)
    printf("%d %d\n",k,p);
    else
        printf("-1\n");
}
}
