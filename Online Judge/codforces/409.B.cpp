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
    string a,b;
    cin>>a>>b;
    int f=0;
    for(int i=0;i<a.size();i++){
        if(b[i]>a[i]) f=1;
        if(b[i]==a[i]) b[i]='z';
        else if
            (b[i]<a[i]) b[i]=b[i];
    }

    if(f==1) pr("-1\n");
    else
    cout<<b<<endl;
}

