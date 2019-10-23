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
    int cnt=0,test;
    sc("%d",&test);
    while(test--){
    string str;
   cin>>str;
    if(str.size()>10){
        cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
    }
    else
        cout<<str<<endl;

    }
}
