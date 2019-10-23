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
#define mx 1000
int main()
{
    string a;
    cin>>a;
    int i,j,cnt=0;

    for(i=0,j=a.size()-1;i<a.size()/2;i++,j--){
        if(a[i]!=a[j])
            cnt++;
    }
    if(cnt==0 && a.size()%2==1)
        pr("YES\n");
    else if(cnt==1)
        pr("YES\n");
    else
        pr("NO\n");
}

