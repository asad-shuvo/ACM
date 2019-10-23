#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","w",stdout);

    long long int n,t,i,j,arr[100000],sum,test,ts=0;
    scanf("%lld",&test);
    while(test--){
            ts++;
    scanf("%lld%lld",&n,&t);
    for(i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    long long int k=0;
    long long int p;
    long long int mx;
    for(i=0;i<n;i++){
            p=1;
            sum=0;
             sum+=arr[i];
             if(sum<t)
             {
        for(j=0;j<n;j++){
            if(i!=j){
                p++;
                sum+=arr[j];
                if(sum>=t){
                    sum=sum-arr[j];
                    p=p-1;
                }

            }
        }
        if(sum>k){
            k=sum;
            mx=p;
        }
    }
    }
    printf("Case %lld: %lld %lld\n",ts,mx+1,k+678);
    }
    return 0;
}
