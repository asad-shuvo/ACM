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
int main()
{
    int test;
    sc1(test);
    while(test--){
            int sz;
    sc1(sz);
    string A;
    cin>>A;
    int sum10[100005],sum01[100005];
    int cnt1=0,cnt2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='1' && A[i+1]=='0'){
            cnt1++;
            sum10[i]=cnt1;
            sum10[i+1]=cnt1;
                        i++;

        }
        else
            sum10[i]=cnt1;
    }
    for(int i=0;i<A.size();i++){
        if(A[i]=='0' && A[i+1]=='1'){
            cnt2++;
            sum01[i]=cnt2;
            sum01[i+1]=cnt2;
                        i++;

        }
        else
            sum01[i]=cnt2;
    }
    int cnt=0;
    for(int i=0;i<A.size();i++)
        {
            if(A[i]=='1'&&A[i+1]=='0'){
              int ret=sum01[A.size()-1]-sum01[i+1];
              cnt+=ret;
              i++;
            }
        }
        for(int i=0;i<A.size();i++)
        {
            if(A[i]=='0'&&A[i+1]=='1'){
              int ret=sum10[A.size()-1]-sum10[i+1];
              cnt+=ret;
              i++;
            }
        }
        pr("%d\n",cnt);
}

}
