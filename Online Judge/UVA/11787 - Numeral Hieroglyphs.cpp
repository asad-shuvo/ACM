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
    FILE
    string A;
    int test;
    sc1(test);
    while(test--){
    cin>>A;
    map<char,int>mp;
    ll sum=0;
    int f=0;
    for(int i=0;i<A.size();i++){
            if(i!=0){
                if(A[i-1]!=A[i]){
                    if(mp[A[i]]>0){
                        f=1;
                    }
                    else
                        mp[A[i]]++;
                    }
                    if(A[i-1]==A[i]){
                        mp[A[i]]++;
                        if(mp[A[i]]>9)f=1;
                    }
                }
                else{
                    mp[A[i]]++;
                }
        if(A[i]=='B')sum+=1;
        if(A[i]=='U')sum+=10;
        if(A[i]=='S')sum+=100;
        if(A[i]=='P')sum+=1000;
        if(A[i]=='F')sum+=10000;
        if(A[i]=='T')sum+=100000;
        if(A[i]=='M')sum+=1000000;
    }
    if(f==1)pr("error\n");
    else pr("%lld\n",sum);
}

}
