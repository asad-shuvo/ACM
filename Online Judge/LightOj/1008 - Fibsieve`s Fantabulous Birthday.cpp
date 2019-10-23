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
    ll   n,L,R,test,te=0;
    sc("%lld",&test);
    while(test--){
    sc("%lld",&n);
    ll   t=sqrt(n);
    if(t*t==n){
        if(n%2==0)
            L=t,R=1;
        else
            L=1,R=t;
    }
    else{
        if((t+1)%2==1){
            ll   total=(t+1)*(t+1);
            ll   J=total-n;
            if(J<(t+1)){
                L=J+1,R=t+1;
            }
            else
            {
                ll   t2=(J+1)-(t+1);
                ll   t3=((t+1)-t2);
                L=t+1,R=t3;
            }
        }
        else{
            ll   total=(t+1)*(t+1);
            ll   total2=(t*t);
            ll   J=n-total2;
            if(J<=(t+1)){
                L=J;
                R=(t+1);
            }
            else if(J>(t+1)){
                ll   t2=J-(t+1);
                ll   t3=(t+1)-t2;
                L=(t+1);
                R=t3;
            }
        }
    }
    pr("Case %lld: %lld %lld\n",++te,L,R);
}
}

