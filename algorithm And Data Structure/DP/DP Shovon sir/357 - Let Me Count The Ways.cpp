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
    ll  S[5]={1,5,10,25,50};
    ll  m=5;
    ll  n;
    while(sc("%lld",&n)!=EOF){
            ll T=count1(S,m,n);
    if(T!=1)
    pr("There are %lld ways to produce %lld cents change.\n",T,n);
    else
            pr("There is only 1 ways to produce %lld cents change.\n",n);

}
}
