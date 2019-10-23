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
    for(int i=0;i<n;i++)sc("%d",&arr[i]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j]+arr[i]<=4){arr[j]+=arr[i];arr[i]=0;break;}
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)cnt++;
    }
        pr("%d\n",cnt);
}
