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
    int n,M=-1,a,arr[mx];
    sc("%d",&a);
    for(int i=0;i<a;i++){
        sc("%d",&arr[i]);
        M=max(M,arr[i]);
    }
    int cnt=0;
    for(int i=0;i<a;i++){
        cnt+=(M-arr[i]);
    }
    cout<<cnt<<endl;
}

