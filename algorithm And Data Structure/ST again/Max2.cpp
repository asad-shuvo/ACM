/******************************************************************
***   Problewm      : Spoj 3693. Maximum Sum                    ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)
#define ull unsigned long long
#define all(v) v.begin(),v.end()

#define sii(t) scanf("%d",&t)
#define sll(t) scanf("%lld",&t)
#define ssii(a,b) scanf("%d%d",&a,&b)
#define ssll(a,b) scanf("%lld%lld",&a,&b)
#define Case(no) printf("Case %d:",++no)
#define nl puts("")
#define P(a) printf("%dn",a)
#define PL(a) printf("%lldn",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)


#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                       //count one
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

////============ CONSTANT ===============////
#define mx  (100010)
#define inf  1000000000                         //infinity value
#define eps 1e-9
#define mod 10007
////=====================================////
struct knw
{
    int maxi,position;
}sum[mx*4],base;

int a[mx];
void update(int node,int s,int e,int i,int value)
{
    if(i>e||i<s) return;
    if(s==e)
    {
        sum[node].maxi=value;
        sum[node].position=i;
        return;
    }
    int n=node<<1;
    int mid=(s+e)>>1;
    update(n,s,mid,i,value);
    update(n+1,mid+1,e,i,value);
    if(sum[n].maxi>sum[n+1].maxi)
    {
        sum[node].maxi=sum[n].maxi;
        sum[node].position=sum[n].position;
    }
    else
    {
        sum[node].maxi=sum[n+1].maxi;
        sum[node].position=sum[n+1].position;
    }
}
knw qu(int node,int s,int e,int l,int r)
{
    if(l>e||r<s) return base;
    if(e<=r && s>=l) return sum[node];
    int n=node<<1;
    int mid=(s+e)>>1;
    knw ret1 = qu(n,s,mid,l,r);
    knw ret2 = qu(n+1,mid+1,e,l,r);
    if(ret1.maxi>ret2.maxi)
        return ret1;
    else
        return ret2;
}
int main()
{
//    input;
//    output;
    int n,no=0;
    while(sii(n)==1)
    {
        for(int i=1;i<=n;i++)
        {
          sii(a[i]);
          update(1,1,n,i,a[i]);
        }
//        for(int i=1;i<=9;i++)
//        pf("Sum[%d] = %dn",i,sum[i]);

        int q;
        sii(q);
        while(q--)
        {
            int l,r,p;
            string s;
            cin>>s;
            if(s[0]=='U')
            {
                int index,value;
                ssii(index,value);
                a[index]=value;
                update(1,1,n,index,value);
            }
            else
            {
                ssii(l,r);
                knw ret = qu(1,1,n,l,r);
                int m1=ret.maxi;
                int pos=ret.position;
                update(1,1,n,pos,0);
                ret = qu(1,1,n,l,r);
                int m2 = ret.maxi;
                P(m1+m2);
                update(1,1,n,pos,m1);
            }
        }
    }
    return 0;
}
