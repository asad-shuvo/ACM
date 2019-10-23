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
    ll t,s,x;
    sc("%lld%lld%lld",&t,&s,&x);
    sum=0,f=0;
    for(int i=t; ;){
        i+=s;
        if(i==x){
            f=1;
            break;
        }
        i+=s+1;
        if(i==x)
        {
            f=1;
            break;

        }
        if(i>x)break;
    }
    if(f==0)pr("NO\n");
    else
        pr("NO\n");
}

