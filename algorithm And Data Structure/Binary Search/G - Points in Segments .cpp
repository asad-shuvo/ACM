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
    int high,low,n,q,i,j,k,test,te=0;
    int arr[100005];
    sc("%d",&test);
    while(test--){
            pr("Case %d:\n",++te);
    sc("%d%d",&n,&q);
    FOR(i,0,n-1){
    sc("%d",&arr[i]);
    }
    while(q--){
        int x,y;
        sc("%d%d",&x,&y);
        int L,H;
         low=0;
         high=n-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]==x){ low=mid;break;}
            if(arr[mid]<x)
                low=mid+1;
                if(arr[mid]>x)
                    high=mid-1;
        }
        L=low;
        low=L;
        high=n-1;
         while(low<=high){
            int mid=(high+low)/2;
            if(arr[mid]<=y)
                low=mid+1;
                if(arr[mid]>y)
                    high=mid-1;
        }
        H=low;
   // cout<<H<<" "<<L<<endl;
           pr("%d\n",H-L);
    }
    }
}

