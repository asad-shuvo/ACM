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
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define pi acos(-1.00)
int main()
{
    dd r,n;
    int test,te=0;
    cin>>test;
    while(test--){
    cin>>r>>n;
    dd high=r/2.0,low=0.0,mid;
    for(int i=0;i<=200;i++){
         mid=(high+low)/2.0;
        dd dmid=2.0*mid;
        dd s=r-mid;
        dd thita=(s*s+s*s-dmid*dmid)/(2.0*s*s);
        thita=acos(thita);
        dd t=(thita*(180.0/pi))*n;
        if(t<360)
            low=mid;
        else
            high=mid;
    }
   // cout<<"Case"<<" "<<++te<<" "<<mid<<endl;
    pr("Case %d: %.10lf\n",++te,mid);
}
    //cout<<mid<<endl;
}


