#include <stdio.h>
int main()
{
    int i,j,m,n,max,k,p;
   while(scanf("%d%d",&i,&j)!=EOF){
         printf("%d %d ",i,j);
    if(i>j)
    {
        n=i;
        i=j;
        j=n;
    }
    max=0;
    for(m=i;m<=j;m++)
    {
        k=m;

         p=1;
        while(k>1){
          if(k%2==0)
          {
              k=k/2;
          }
          else
            k=3*k+1;
          p++;
        }
        if(p>=max)
            max=p;;
    }
    printf("%d\n",max);
}
}
