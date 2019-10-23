#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define mem(x,y) memset(x,y,sizeof(x))
#define F(i,a,b) for(i=a;i<=b;i++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
    string A[30];
    int n,m;
    sc2(n,m);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    pr("Case #%d:\n",++te);
for(int i=0;i<m;i++){
    string B;
    cin>>B;
    int f=0;
    for(int j=0;j<n;j++){
        if(B==A[j])f=1;
    }
    if(f==1)pr("yes\n");
    else{
        int f1=0;
        for(int j=0;j<n;j++){
            if(B.size()==A[j].size()){
                int cnt=0;
                string T=A[j];
                for(int k=0;k<B.size();k++){
                    if(B[k]!=T[k])cnt++;
                }
                if(cnt==1)f1++;
            }
        }
        if(f1==1)pr("yes\n");
        else pr("no\n");
    }
}
}
}
