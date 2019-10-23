#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,arr[1000],sum,sum1;
    while(scanf("%d",&n)!=EOF){
    sum=0;
    sum1=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int diff=sum/2;
    sort(arr,arr+n);
    int j=0;
    for(i=n-1;i>=0;i--){
            j++;
    sum1=sum1+arr[i];
    if(sum1>diff)
        break;
    }
    printf("%d\n",j);
    }
    return 0;
}
