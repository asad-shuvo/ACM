#include <bits/stdc++.h>
using namespace std;
#define mx 10000005
bool status[mx+1];
long long int prime[mx];
int main()
{
//status[1]=1;
    long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }/*
    for(i=2;i<=mx;i++){
        if(status[i]==0)
            prime.push_back(i);
    }*/
    long long int cnt=0;
    for(i=2;i<=mx;i++){
        if(status[i]==0){
                cnt++;
        }
        prime[i]=cnt;
    }
    long long int test,n,m;
    scanf("%lld",&test);
    while(test--){
    scanf("%lld",&n);
    printf("%lld\n",prime[n-1]);
    }

    //cout<<prime[test];

}

