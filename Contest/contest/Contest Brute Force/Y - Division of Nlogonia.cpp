#include <stdio.h>
int main()
{
   long i,j,l,m,p,q,t;
   while(scanf("%ld",&t))
   {
       if(t==0)
        break;
        scanf("%ld%ld",&p,&q);
       for(l=1;l<=t;l++)
    {
    scanf("%ld%ld",&i,&j);
    if(i==p || j==q)
        printf("divisa\n");
    if(i>p && j>q)
        printf("NE\n");
   else if(i<p && j>q)
        printf("NO\n");
  else if(i>p && j<q)
        printf("SE\n");
       else if(i<p && j<q)
        printf("SO\n");
}
}
return 0;
}
