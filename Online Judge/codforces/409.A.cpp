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
    string a;
    cin>>a;
    int f=0;
    int cnt=0;
    if(a.size()==2){
            if(a[0]=='K' && a[1]=='V')
            cnt=0;
    else
        cnt=1;
    }
    else if(a.size()==1)
        cnt=0;
    else{
    for(int i=0;i<a.size();i++){
        if(a[i]=='V' && a[i+1]=='V' && a[i+2]!='K' && f==0)
            {a[i+1]='K';
            f=1;}
        if(a[i]=='K' && a[i+1]=='K' && a[i-1]!='V' && f==0)
            {a[i]='V';f=1;}
            if(a[i]=='V' && a[i+1]=='K')
                cnt++;
    }
    }
    pr("%d\n",cnt);

}

