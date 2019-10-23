#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]={-2,-2,2,2,1,1,-1,-1};///knight move x - exis
int Kfy[]={1,-1,1,-1,2,-2,2,-2};///knight move y- exis
int fx8[]={1,1,1,0,0,-1,-1,-1};
int fy8[]={0,1,-1,1,-1,0,1,-1};
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
int vochk(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u')
        return 1;
    return 0;
}
int main()
{
    int test,te=0;
    sc1(test);
    while(test--){
            int n;
    sc1(n);
        string A;
        cin>>A;
        int cnt=0;
        for(int i=0;i<A.size();i++){
            if(A[i]=='a' || A[i]=='e' ||A[i]=='i' ||A[i]=='o' ||A[i]=='u'){
                if(i==0)cnt++;
                else {
                    if(vochk(A[i-1])==1)cnt=cnt;
                    else cnt++;
                }
            }
        }
        pr("Case %d: %d\n",++te,cnt);
    }
}

