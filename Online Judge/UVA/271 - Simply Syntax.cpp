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
#define FORR(i,a,b) for(i=a;i>=b;i--)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

int main()
{
  //  FILE
    int i,j,k,l;
    string a;
 while(cin>>a){
    int s=0;
    FORR(i,a.size()-1,0)
    {
        if(a[i]>='p' && a[i]<='z') s++;

        if(a[i]=='C' || a[i]=='D' || a[i]=='E' || a[i]=='I' )
        {
            if(s>=2)
                s--;
            else
            {
                s=0;
                break;
            }
        }
        if(a[i]=='N')
        {
            if(s<1){
                s=0;
                break;
            }
        }
    }
    if(s==1) cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}

