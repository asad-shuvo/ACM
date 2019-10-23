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
int mat[15][15],path[15][15];
int pathprint(int i,int j)
{
    if(i==j)
        pr("A%d",i);
    else{
        pr("(");
        pathprint(i,path[i][j]);
        pr(" x ");
        pathprint(path[i][j]+1,j);
        pr(")");
    }
}
int main()
{
    int n,te=0;
    while(scanf("%d",&n)&& n>0){
        int arr[n+5],k=0;
        for(int i=0;i<n;i++){
            int x,y;
            sc("%d%d",&x,&y);
            if(i==0){
                arr[k++]=x;
            }
            arr[k++]=y;
        }
       for(int i=1;i<=n;i++)mat[i][i]=0;
       for(int L=1;L<=n;L++){
        for(int i=1;i<=n+1-L;i++){
            int j=i+L-1;
            mat[i][j]=INT_MAX;
            for(k=i;k<j;k++){
                int q=mat[i][k]+mat[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(q<mat[i][j])
                {
                    mat[i][j]=q;
                    path[i][j]=k;
                }
            }
        }
       }
       pr("Case %d: ",++te);
       pathprint(1,n);
       pr("\n");
    }

}

