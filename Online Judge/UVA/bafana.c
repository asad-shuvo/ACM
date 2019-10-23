#include <stdio.h>
int main()
{
    int n,k,p,pass,t,i=1,l;
    scanf("%d",&t);
    while(t>0){
    scanf("%d%d%d",&n,&k,&p);
    if(n>p){
        if(n==(k+p))
    {
        pass=n;
    }
   else if ((k+p)<n)
    {
        pass=k+p;
    }
   else if((k+p)>n)
    {
        pass=(k+p)-n;
    }
    }
    else {
        l=p%n;
        if (n==(l+k))
    {
        pass=n;
    }
   else if(n<(l+k))
    {
        pass=(l+k)-n;
    }
    else if(n>(l+k))
    {
        pass=(l+k);
    }
    }
    printf("Case %d: %d\n",i,pass);
    t--;
    i++;
    }
    return 0;

}

