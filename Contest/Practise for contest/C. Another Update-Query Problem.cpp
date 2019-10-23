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
int main()
{
    int arr[10005],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){scanf("%d",&arr[i]);}
    int d,l,r,c,cnt=0,val;
    sc("%d%d%d%d",&c,&d,&l,&r);
    for(int i=l;i<=r;i++){
         val=(cnt*arr[l]+1)%1000000007;
        val=(val*arr[l])%1000000007;
        cnt++;
    }
    pr("%d\n",val);
}

