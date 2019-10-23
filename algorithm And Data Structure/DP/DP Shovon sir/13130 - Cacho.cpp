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
    int test,n;
    sc("%d",&test);
    while(test--){
            int arr[6];
        for(int i=1;i<=5;i++){
            sc("%d",&arr[i]);
        }
        int f=0;
    for(int i=1;i<=4;i++){
        if(arr[i]+1!=arr[i+1]) f=1;
    }
    if(f==0)pr("Y\n");
    else
        pr("NO\n");
    }
}

