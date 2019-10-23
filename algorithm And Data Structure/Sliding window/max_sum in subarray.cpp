#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

/*
ll status[mx];
void sieve(){
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
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int n,k,arr[mx];
int maxsum()
{
    if(n<k)return -1;
    int max_sum=0,i;
    F(i,0,k-1){
    max_sum+=arr[i];
    }
    int window_sum=max_sum;
    F(i,k,n-1){
    window_sum+=(arr[i]-arr[i-k]);
    max_sum=max(max_sum,window_sum);
    }
    return max_sum;
}
int main()
{
    int i;
    sc2(n,k);
    F(i,0,n-1){
    sc1(arr[i]);
    }
    cout<<maxsum()<<endl;
}

