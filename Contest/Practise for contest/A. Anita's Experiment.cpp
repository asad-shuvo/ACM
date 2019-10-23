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
    int arr[1000005],arr2[1000005];
int main()
{
    int test;
    sc("%d",&test);
    while(test--){
    int n,f1=0,f2=0,f3=0,f4=0,f5=0,k=0,mxx=-1;
    sc("%d",&n);
    for(int i=0;i<n;i++)sc("%d",&arr[i]);
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i])f1++;
        if(arr[i-1]>=arr[i])f2++;
        if(arr[i-1]==arr[i]) f3++;
        if(i<n-1){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
        arr2[k++]=i;f4++;
        }
        if(k>1)
            mxx=max(mxx,(arr2[k-1]-arr2[k-2]));
        }
    }
    if(f3==n-1)pr("neutral\n");
    else if(f1==n-1)pr("allGoodDays\n");
    else if(f2==n-1)pr("allBadDays\n");
    else if(f4<2 &&  f3!=n-1 && f2!=n-1 && f1!=n-1)pr("none\n");
    else if(f4>=2) pr("%d\n",mxx-1);
}
}

