#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],a[100],i,j,f,k,l,m,n,sum,ans;

    while(scanf("%d",&n)!=EOF){
            if(n==0)
            break;
            sum=0;
            f=1;
            k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(i=n-1,j=i-1;i>0,j>=0;i--,j--){
            a[k++]=arr[i]-arr[j];
            sum+=arr[i]-arr[j];
        }
        m=1422-arr[n-1];
        a[k++]=m*2;
    for(i=0;i<k;i++)
    {
    if(a[i]>200){
    f=0;
    break;
    }
    }
   // printf("\n");
  //  printf("%d",sum);
    ans=1422-sum;
    if(f==1 && ans<=200)
        printf("POSSIBLE\n");
    else
        printf("IMPOSSIBLE\n");
    //return 0;

}
return 0;
}
