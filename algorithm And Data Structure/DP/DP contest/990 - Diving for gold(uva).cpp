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
#define mx 1000
vector<int>ans;
int W,N;
int wt[35],val[35];
int C[35][1010];
int func()
{
    for(int i=0;i<=N;i++)C[i][0]=0;
    for(int i=0;i<=W;i++)C[0][i]=0;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(wt[i]<=j) C[i][j]=max(C[i-1][j],C[i-1][j-wt[i]]+val[i]);
            else
                C[i][j]=C[i-1][j];
        }

    }
    return C[N][W];
}

void traceBack(int i,int j)
{
    if(i==0 || j==0) return;
    if(wt[i]<=j && C[i][j]==val[i]+C[i-1][j-wt[i]]){
    ans.push_back(i);
    traceBack(i-1,j-wt[i]);
}
else
    traceBack(i-1,j);
}
int main()
{
    int w;
    bool blank = false;

    while(sc("%d%d",&W,&w)==2){


    sc("%d",&N);
    for(int i=1;i<=N;i++)
    {
        sc("%d%d",&wt[i],&val[i]);
        wt[i]*=3*w;
    }
    if(blank) puts("");
        blank = true;
    //func();
    ans.clear();
    pr("%d\n",func());
    traceBack(N,W);
        cout<<ans.size()<<endl;

for(int i=ans.size()-1;i>=0;i--)
{
    pr("%d %d\n",wt[ans[i]]/(3*w),val[ans[i]]);
  //  cout<<wt[ans[i]]/(3*w)<<" "<<val[ans[i]]<<endl;
}

}
}
