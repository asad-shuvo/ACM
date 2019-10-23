#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    long long int arr[100005],t,n,m,i,sum;
    while(scanf("%lld%lld",&n,&m)!=EOF){
            sum=0;
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+n);
         t=0;
        for(i=n-1;i>=0;i--){
                 if(sum>=m)
            break;
                t++;
            sum+=arr[i];
        }
    if(sum<m)
        printf("0\n");
    else
        printf("%lld\n",t);
    }
    return 0;
}
