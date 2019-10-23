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
    int n,t;
    int i,j;
    sc("%d%d",&n,&t);
    int arr[100005];
    int cuml[10000];
    int sum=0;
    FOR(i,0,n-1){
    sc("%d",&arr[i]);
    sum+=arr[i];
    cuml[i]=sum;
    }
    int cnt=0;
    int low=0,high=n,output;
 while(low<=high){
        int mid=(low+high)/2;
        int f=0;
        for(i=mid-1;i<n;i++){
            if(i==mid-1){
                if(cuml[i]<=t)
                {
                    f=1;
                    output=mid;
                    break;
                }
            }
            else{
                    if((cuml[i]-cuml[i-mid])<=t){
                        f=1;
                        output=mid;
                        break;
                    }
            }

        }
        if(f==1)
            low=mid+1;
        else
            high=mid-1;
    }
    pr("%d\n",output);
}

