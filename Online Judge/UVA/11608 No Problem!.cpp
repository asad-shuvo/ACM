#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],i,j,k,a[100],sum=0;
    scanf("%d",&n);
    sum=sum+n;
   // printf("%d\n",sum);
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        scanf("%d",&a[i]);
    }
   if(sum>a[0]){
    printf("No problem! :D\n");
    sum=sum-a[0];
   }
   else
    printf("No problem. :(\n");
   for(i=0,j=i+1;i<5-1,j<5;i++,j++)
   {
       sum=sum+arr[i];
       printf("%d \n",sum);
       //printf("%d %d\n",arr[i],a[j]);
       if(sum>=a[j])
       {
           printf("No problem! :D\n");
    sum=sum-a[j];
       }
       else if(sum<a[j])
       {
            printf("No problem. :(\n");
       }
   }
}
