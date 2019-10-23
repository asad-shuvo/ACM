#include <bits/stdc++.h>
using namespace std;
long long int arr[500005],a[500005];
int main()
{
long long int   i,j,k,l,n,f;
    while(scanf("%lld",&n)!=EOF){
            if(n==0)
            break;
    for(i=0;i<n;i++){
        scanf("%lld%lld",&arr[i],&a[i]);
    }
    f=1;
    sort(arr,arr+n);
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(arr[i]!=a[i]){
            f=0;
            break;
    }
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
}
return 0;
}
