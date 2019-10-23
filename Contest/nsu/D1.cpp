
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc,idx=0;
    scanf("%lld",&tc);
    while(tc--)
    {
        ll x,x_val,y,y_val;
        scanf("%lld %lld %lld %lld",&x,&x_val, &y, &y_val);
        ll dif_idx = y-x;
        ll dif_val = y_val-x_val;
        ll d = dif_val/dif_idx;
        ll ans = x_val - ((x-1)*d);
        printf("Case %lld: %lld\n",++idx,ans);
    }
}

