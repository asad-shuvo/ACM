#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    int arr[3005],an[3005];
    int n,i,j,k,a[3005],sum,temp,chk,z,flag;
    while(scanf("%d",&n)!=EOF){
             for(i=0;i<n;i++)
            {
        scanf("%d",&arr[i]);
            }
            k=0;
            z=0;
    flag=1;
    for(i=0,j=i+1;i<n-1;i++,j++)
    {
       if(arr[i]>arr[j])
       {
           sum=arr[i]-arr[j];
           a[k++]=sum;
       }
       else{
        sum=arr[j]-arr[i];
        a[k++]=sum;
       }
    }
    for(i=1;i<n;i++)
    {
        an[z++]=i;
    }
    sort(a,a+k);
   for(i=k-1,j=z-1;i>=0,j>=0;i--,j--)
   {
       if(a[i]!=an[j])
       {
        flag=0;
        break;
       }
   }

    if(flag==1)
        printf("Jolly\n");
    else
        printf("Not jolly\n");
}
return 0;
}
