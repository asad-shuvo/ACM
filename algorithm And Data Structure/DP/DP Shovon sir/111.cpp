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
    int n,arr[100],arr1[100],table[100][100];;
    sc("%d",&n);
    for(int i=0;i<n;i++){
        int t;
        sc("%d",&t);
        arr[t-1]=i;
    }
    for(;;){

        for(int i=0;i<n;i++){
            int a;
            if(sc("%d",&a)!=1)return 0;
            arr1[a-1]=i;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i-1]==arr1[j-1])table[i][j]=table[i-1][j-1]+1;
    else table[i][j]=max(table[i-1][j],table[i][j-1]);
            }
        }
        pr("%d\n",table[n][n]);
    }

}
