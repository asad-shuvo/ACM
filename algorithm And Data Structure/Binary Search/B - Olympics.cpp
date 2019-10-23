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

int main()
{
    int test,te=0;
    sc("%d",&test);
    while(test--){
    dd mid,rl,rw;
    string str;
    sc("%lf",&rl);
    cin>>str;
    sc("%lf",&rw);
    dd high=400,low=0.0;
    dd output;
    for(int i=0;i<=400;i++){
         mid=(high+low)/2;
        dd width=mid*(rw/rl);
        dd diagonal=sqrt((mid*mid)+(width*width));
        dd s=diagonal/2;
        dd w=(s*s+s*s-width*width)/(2*s*s);
        dd is=acos(w);
        dd rad=is*s;
        dd R=rad*2+mid*2;
        if(R<=400){
       output=mid;
       low=mid;
        }
        else
            high=mid;
    }
    dd wi=output*(rw/rl);
   // cout<<output<<" "<<wi<<endl;
    pr("Case %d: %.8lf %.8lf\n",++te,output,wi);
   // cout<<output<<endl;
}
}

