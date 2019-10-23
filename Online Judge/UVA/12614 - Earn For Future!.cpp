#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,k=0,j,mx,arr[10005],t;
    scanf("%lld",&t);
    while(t--){
            k++;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    mx=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>mx)
            mx=arr[i];
    }
    printf("Case %lld: %lld\n",k,mx);
    }
    return 0;

}
