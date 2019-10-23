#include <stdio.h>
int main()
{
   long int a,b,c,t,t1,t2,test,i,ans;
    while((scanf("%ld",&test))==1)
    {
    for(i=1;i<=test;i++)
    {
    scanf("%ld%ld%ld",&a,&b,&c);
    if(a>b && b>c || a<b && b<c)
        ans=b;
    if(b>a && a>c || b<a && a<c)
        ans=a;
    if(a>c && c>b || a<c && c<b)
        ans=c;
        printf("case %ld: %ld\n",i,ans);
}
}
}
