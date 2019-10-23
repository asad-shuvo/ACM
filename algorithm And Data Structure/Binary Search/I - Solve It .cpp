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
dd p,q,r,s,t,u;
#define EPS 1e-7
dd func(double x){
return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
dd binary(){
dd hi=1.0,lo=0.0;
while(lo+EPS<hi){
    dd mid=(lo+hi)/2;
    if(func(lo)*func(mid)<=0)
    {
        hi=mid;

    }
    else
        lo=mid;
}
return (lo+hi)/2;
}
int main()
{
    while(sc("%lf%lf%lf%lf%lf%lf",&p,&q,&r,&s,&t,&u)!=EOF){
    if(func(0)*func(1)>0) pr("No solution\n");
    else
    pr("%.4lf\n",binary());

        //cout<<binary();
    }
}

