#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    int sum,N,K,X,k,l,i,j=0,m,n,o,p,sum1,sum2,test,ans;
    scanf("%d",&test);
    while(test--){
            j++;
            sum=0;sum2=0;
    scanf("%d%d%d",&N,&K,&X);
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    sum2=sum2+X;
    for(i=1;i<K;i++)
    {
        sum2+=X+i;
    }
ans=sum-sum2;
    printf("Case %d: %d\n",j,ans);
    }
    return 0;
}
