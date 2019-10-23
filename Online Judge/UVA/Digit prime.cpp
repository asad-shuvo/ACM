#include <bits/stdc++.h>
using namespace std;
#define mx 1000005
int status[mx+1];
int prime[mx];
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
    int cnt=0;
    for(i=2;i<=mx;i++){
        if(status[i]==0){
            int dig=i,rem,sum=0;
            while(dig!=0){
                sum+=dig%10;
                dig/=10;
            }
            if(status[sum]==0)
                cnt++;
        }
        prime[i]=cnt;
    }
    int test,n,m;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d",&n,&m);
    printf("%d\n",prime[m]-prime[n-1]);
    }

    //cout<<prime[test];

}

