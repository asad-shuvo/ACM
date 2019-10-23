#include <stdio.h>
int main()
{
    int i,n,j,t;
    float num[1020],sum,avg,count,avg1;
    while(scanf("%d",&t)==1)
    {
    for(j=0;j<t;j++)
    {
        sum=0;
    count=0;
        scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&num[i]);
        sum=sum+num[i];
    }

    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(num[i]>avg)
            count=count+1;
    }
      avg1=((count*100)/n);
      printf("%.3f%%\n",avg1);
}
}
return 0;
}

