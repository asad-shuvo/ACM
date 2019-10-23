#include <stdio.h>
int main()
{
    int n,k,p,pass,t,i=1;
    scanf("%d",&t);
    while(t>0){
    scanf("%d%d%d",&n,&k,&p);
    if(n>p && (n==(k+p)));
    {
        pass=n;
    }
   if ((k+p)<n)
    {
        pass=k+p;
    }
   else if((p<n) && (k+p)>n)
    {
        pass=(k+p)-n;
    }
    else if(p>n && (n==((p%n)+k)))
    {
        pass=n;
    }
   else if(p>n && (n<((p%n)+k)))
    {
        pass=(((p%n)+k)-n);
    }
    else if(p>n && (n> ((p%n)+k)))
    {
        pass=((p%n)+k);
    }
    printf("Case %d: %d\n",i,pass);
    t--;
    i++;
    }
    return 0;

}
