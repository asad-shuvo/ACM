#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
ll  count1( ll  S[], ll  m, ll  n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    ll  table[n+1];

    // Initialize all table values as 0
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0)
    table[0] = 1;

    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(ll  i=0; i<m; i++)
        for(ll  j=S[i]; j<=n; j++){
            table[j] += table[j-S[i]];
           // cout<<table[j]<<endl;
        }

    return table[n];
}
int main()
{
//    FILE
    ll  S[11]={10000,5000,2000,1000,500,200,100,50,20,10,5};
    ll  m=11;
    ll  n;
    ll k1,k2,k3;
    dd n1;

    while(sc("%lld.%lld",&k1,&k2)){
            n=k1*100+k2;
            if(n==0)break;
            ll T=count1(S,m,n);
            pr("%3lld.%.2lld%17lld\n",k1,k2,T);
}
}
