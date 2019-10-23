#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>st;
map<ll,ll>mp;
int main()
{
    ll n,base,mn = 999999999999999999,val;
    cin>>n>>base;
    ll sq = sqrt(base);
    for(ll j = 2; j<= sq; j++)
    {
        ll cn = 0;
        if(base % j == 0)
        {
            while(base %j  == 0)
            {
                cn++;
                base/=j;
            }
        }
        if(cn > 0)
        {
            st.push_back(j);
            mp[j] = cn;
        }
        if(base == 1)
            break;
    }
    if(base != 1)
    {
        st.push_back(base);
        mp[base] = 1;
    }
    for(int i = 0; i< st.size(); i++)
    {
        ll w = n,sum = 0;
        while(w!=0)
        {
            sum+=(w / st[i]);
            w/=st[i];

        }
        sum/=mp[st[i]];
        mn = min(mn,sum);
    }
    if(mn == 999999999999999999) mn = 0;
    cout<<mn<<endl;
}
