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
    int n,arr[100005];
    sc("%d",&n);
    for(int i=0;i<n;i++){
        sc("%d",&arr[i]);
    }
int    mxx=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>mxx){mxx=arr[i],arr[i]=0;}
        else if(mxx==arr[i])arr[i]=1;
        else if(mxx>arr[i])arr[i]=((mxx-arr[i])+1);
    }
    for(int i=0;i<n;i++)
        pr("%d ",arr[i]);
    pr("\n");
}

