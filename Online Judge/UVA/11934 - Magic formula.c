#include <stdio.h>
int main()
{
   int a,b,c,d,L,i,j,k,n,count;
   while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&L))
   {
       if(a==0 && b==0 && c==0 && d==0 && L==0)
        break;
       count=0;
   for(i=0;i<=L;i++)
   {
       n=(a*i*i)+(b*i)+c;
       if(n%d==0)
        count++;
   }
   printf("%d\n",count);
   }
}
