/**********************************************************/
/**            Bismillahir-rahmanir-rahim                **/
/**  In the name of Allah, the Beneficent, the Merciful. **/
/**********************************************************/
/**@author: Sayed Sohan*/
/**status : */
/**url: */
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace std;
typedef long long  ll;
typedef unsigned long long ull;
#define FOR(i,x,n) for(ll i=(x);i<(n);i++)
#define IFOR(i,n,x) for(ll i=(n-1);i>=(x);i--)
#define REP(i,n) for(ll i=0;i<n;i++)
#define IREP(i,n) for(ll i = n-1;i>=0;i--)
#define cas(c,x)  cout<<"Case "<<c++<<": "<<x<<NL;
#define clr(arr,value) memset(arr,value,sizeof(arr))
#define MOD 1000000007
#define PI acos(-1.0)
#define rtod 180/PI
#define DIF if(0)
#define PB push_back
#define MP make_pair
#define SP " "
#define NL "\n"
#define DE cout<<"HERE"<<endl;
#define F first
#define S second
#define INF 1e18
#define Pause system("pause")
#define __FAST_IO ios_base::sync_with_stdio(0);
#define clr2V(x,sz) for(int iii=0;iii<=sz;iii++) x[iii].clear();
#define NUM1(x) __builtin_popcount(x)
#define MAX 100//00010/** can increase another 0 */

//** your code goes from here

ll gcd(ll x, ll y)
{
        if (y == 0)
           return x;
        else
           return gcd(y, x % y);
}


ll func(ll n,ll mx)
{
    ll ans = 0;
    for(ll i=n;i<=mx;i+=n){
        for(ll j=i;j<=mx;j+=n){
            ll x = gcd(i,j);
            if(x==n){
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    __FAST_IO;
    ll i,j,k,l,m,n,x,y,coun,sum,ans,T,check;

    //phi_function(MAX); // complexity O(root(n))
    //func(MAX); // complexity (n)
    cin>>T;
    ll c = 1;
    while(T--){
        cin>>x>>y;
        ll low = 1, high = x;
        ll mid;
        ans = 0;
        while(high>=low){
            mid = (low+high)/2;
            l = func(mid,x);
            //cout<<l<<NL;
            if(l>=y){
                //cout<<l<<NL;
                ans = mid;
                low = mid+1;
            }
            else if(l<y){
                high = mid-1;
            }

        }
        if(ans == 0) cas(c,-1)
        else cas(c,ans)

    }


    return 0;
}
