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
    int arr[100005],n;
    sc("%d",&n);
    int Mn=INT_MAX;
    int Mx=-INT_MAX;
   // int minn=INT_MAX;
    //int maxx=-INT_MAX;
    for(int i=0;i<n;i++)
    {
        sc("%d",&arr[i]);
            Mn=min(Mn,arr[i]);
            Mx=max(Mx,arr[i]);
    }
   // pr("%d %d\n",Mn,Mx);
    for(int i=0;i<n;i++){
        if(i==0){
            int T=abs(arr[i]-arr[i+1]);
            int T1=abs(arr[i]-Mx);
            pr("%d %d\n",T,T1);
        }
        else if(i==n-1){
            int T=abs(arr[i]-arr[i-1]);
            int T1=abs(arr[i]-Mn);
            pr("%d %d\n",T,T1);
        }
        else{
            int T=abs(arr[i]-arr[i-1]);
            int T1=abs(arr[i]-arr[i+1]);
            int T2=min(T,T1);
            int D1=abs(arr[i]-Mn);
            int D2=abs(arr[i]-Mx);
            int D=max(D1,D2);
            pr("%d %d\n",T2,D);
        }
    }
}

