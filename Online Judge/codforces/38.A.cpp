#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100005

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
#define FOR(i,a,b) for(i=a;i<=b;i++)
int main()
{
    int n,d[105],a,b,i;
    sc("%d",&n);
    FOR(i,0,n-2){
    sc("%d",&d[i]);
    }
    sc("%d%d",&a,&b);
    int sum=0;
    for(i=a-1;i<b-1;i++){
        sum+=d[i];
    }
    pr("%d\n",sum);
}
