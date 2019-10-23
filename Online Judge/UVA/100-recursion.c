#include <stdio.h>
int max(int m)
{
    if(m==1) return 1;
    else if(m%2==0) return 1+max(m/2);
    else return 1+max(3*m+1);
}
int main()
{
    int start,end,m,i,count1,count,temp;
    while(scanf("%d%d",&start,&end)==2){
            count1=0;
            printf("%d %d",start,end);
    if(start>end)
    {
         temp = start;
        start = end;
        end=temp;
    }
    for(i=start;i<=end;i++)
    {
        m=i;
        count=max(m);
        if(count>count1)
            count1=count;
            }
        printf(" %d\n",count1);
}
return 0;
}
