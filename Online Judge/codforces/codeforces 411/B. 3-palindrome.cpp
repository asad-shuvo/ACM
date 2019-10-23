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
    int n;
    sc("%d",&n);
    int sz=n/2;

        //int sz2=n-sz;
    for(int i=1;i<=sz;i++)
    {
        if(i%2==1)
            pr("aa");
        else
        pr("bb");

    }
    if(n%2==1)
    {
        int z=n/2;
        if(z%2==1)
            pr("b");
        else
            pr("a");
    }
    pr("\n");

}

