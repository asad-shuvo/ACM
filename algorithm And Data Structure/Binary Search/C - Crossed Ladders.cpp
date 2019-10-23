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
    dd x,y,h;
    int test,te=0;
    sc("%d",&test);
    while(test--){
    cin>>x>>y>>h;
    dd high=min(x,y);
    dd low=0.0,mid;
    for(int i=0;i<=200;i++){
         mid=(low+high)/2;
        dd m=sqrt((y*y)-(mid*mid));
        dd n=sqrt((x*x)-(mid*mid));
        dd hh=(m*n)/(m+n);
        if(hh<=h) {
            high=mid;
        }
        else
            low=mid;
    }
printf("Case %d: %.8lf\n",++te,mid);
}
}


