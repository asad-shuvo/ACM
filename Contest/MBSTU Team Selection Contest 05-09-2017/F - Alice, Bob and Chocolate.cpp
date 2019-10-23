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
    int n;
    int tmebob[100005]={0},tmealice[100005]={0};

    sc("%d",&n);
            int gainalice=n,gainbob=0;

    ll arr[100005];
    for(int i=0;i<n;i++)
        sc("%d",&arr[i]);
    for(int i=0;i<n;i++){
            if(i==0)
        tmealice[i]=arr[i];
    else tmealice[i]=arr[i]+tmealice[i-1];
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            gainbob++;
            gainalice--;
            tmebob[i]=arr[i];
        }
       else if(i==0){
            int t;
            tmebob[i]=arr[i]+tmebob[i+1];
        }
        else{
            if(tmebob[i+1]>=tmealice[i-1]){tmebob[i]=arr[i]+tmebob[i+1];}
            else if(tmebob[i+1]<tmealice[i-1]){
                   // cout<<tmebob[i+1]<<" "<<tmealice[i-1]<<endl;
                gainbob++;
                gainalice--;
                tmebob[i]=arr[i]+tmebob[i+1];
            }
        }
    }
    if(n==1)cout<<"1"<<" "<<"0"<<endl;
   else if(n==2)cout<<"1"<<" "<<"1"<<endl;
    else cout<<gainalice<<" "<<gainbob<<endl;
}

