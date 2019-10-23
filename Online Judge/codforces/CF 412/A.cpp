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
    int n,m,i,j,k,l;
    int a[5000],b[5000];
    sc("%d",&n);
    int f1=0,f2=0;
    for(i=0;i<n;i++)
    {
    sc("%d%d",&a[i],&b[i]);
    if(a[i]!=b[i]) f1=1;
    }
    if(f1==1) pr("rated\n");
    else{
    for(i=1;i<n;i++)
    {
        if(b[i]>b[i-1])
            f2=1;
    }
    if(f2==1) pr("unrated\n");
    else
        pr("maybe\n");
    }

}

