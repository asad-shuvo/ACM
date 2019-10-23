#include <stdio.h>
int main()
{
    int i,max,n,t,j;
    int array[10000];
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
    max=array[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(max<array[i]){
            max=array[i];
    }
    }
    printf("Case %d: %d\n",j,max);
}
return 0;
}

