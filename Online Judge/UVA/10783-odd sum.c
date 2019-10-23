#include <stdio.h>
int main()
{
    int i,j,k,l,count,test;
    scanf("%d",&test);
  for(i=1;i<=test;i++)
    {
        count=0;
        scanf("%d%d",&k,&l);
    for(j=k;j<=l;j++)
    {
        if((j%2)!=0)
        {
            count=count+j;
        }
    }
    printf("case %d: %d\n",i,count);
    }
    return 0;
}
