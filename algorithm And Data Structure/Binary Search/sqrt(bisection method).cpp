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
    dd a,b,n;
    cin>>a;
    dd start=0.0;
    dd endd=a;
    dd mid;
    int i;
    for(i=1;i<=300;i++){
     mid=(start+endd)/2;
    if(mid*mid>a)
        endd=mid;
    if(mid*mid<a)
        start=mid;
    }
    cout<<mid<<endl;
}
