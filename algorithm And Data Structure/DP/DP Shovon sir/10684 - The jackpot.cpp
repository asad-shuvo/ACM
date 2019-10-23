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
    int n;
    while(sc("%d",&n) && n>0){
    int sum=0;
    int maxSum=-1;
    while(n--){
        int m;
        sc("%d",&m);
        sum+=m;
        if(sum<0)sum=0;
        maxSum=max(maxSum,sum);
    }
    if(maxSum!=0)pr("The maximum winning streak is %d.\n",maxSum);
    else
        pr("Losing streak.\n");
}
}

