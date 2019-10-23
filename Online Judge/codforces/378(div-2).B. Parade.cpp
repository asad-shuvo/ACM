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
    int arr1[100005],arr2[100005],n;
    sc("%d",&n);
    int sum1=0,sum2=0,cnt=0;
    for(int i=0;i<n;i++){
        sc("%d%d",&arr1[i],&arr2[i]);
       // if(arr1[i]>arr2[i]){swap(arr1[i],arr2[i]);
       // cnt++;}
        sum1+=arr1[i],sum2+=arr2[i];
    }
    int diff=abs(sum1-sum2);
    int mxx=diff;
    int index=0;
    for(int i=0;i<n;i++){

    int sum=abs((sum1-arr1[i]+arr2[i])-(sum2-arr2[i]+arr1[i]));
   // pr("%d\n",sum);
    if(sum>mxx){
            mxx=sum;
        index=i+1;
    }
    }
    pr("%d\n",index);
}

