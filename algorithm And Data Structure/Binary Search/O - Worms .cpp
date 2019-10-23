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
    int i,n,m,arr[100005],q;
    sc("%d",&n);
    FOR(i,0,n-1){
    sc("%d",&arr[i]);
    }
    int sum=0;
    int cuml[10000];
    for(i=0;i<n;i++){
        sum+=arr[i];
        cuml[i]=sum;
    }
    sc("%d",&q);
    while(q--){
sc("%d",&m);
int low=0,high=n-1;
while(low<=high){
    int mid=(high+low)/2;
    if(cuml[mid]==m){low=mid; break;}
    if(cuml[mid]<m)low=mid+1;
    if(cuml[mid]>m) high=mid-1;
}
pr("%d\n",low+1);
    }
}

