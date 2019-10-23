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
    int n,t;
    sc("%d%d",&n,&t);
    string a;
    cin>>a;
    while(t--){
    for(int i=0;i<a.size()-1;i++){
     if(a[i+1]=='G' && a[i]=='B')
     {
         a[i+1]='B';
         a[i]='G';
         i++;
     }
    }
    }
    cout<<a<<endl;
}

