#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1005

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
    while(sc1(n) && n>0){
    getchar();
    string A;
    getline(cin,A);
    int s=0,e=0;
int    m=-1;
    int i;
    int sz=A.size();
    map<char,int>mp;
    mp.clear();
    int cnt=0,cntc=0;
    for( i=0;i<sz;i++){
        if(mp[A[e]]==0){
            mp[A[e]]=1;
            cnt++;
            cntc++;
            e++;
        }
        else if(mp[A[e]]>0){
                mp[A[e]]++;
                e++;
            cnt++;
        }
        if(cntc>n){
            m=cnt-1;
    //        i--;
            break;
        }
    }
    if(cntc<=n)
        m=cnt;
    while(e<sz){
        while(cntc>n){
            if(mp[A[s]]>1)mp[A[s++]]--;
            else if(mp[A[s]]==1){mp[A[s++]]=0;cntc--;}
            }
        while(e<sz){
            if(mp[A[e]]==0){
                cntc++;
                mp[A[e]]=1;
                                e++;
            }
            else if(mp[A[e]]>=1){
                mp[A[e]]++;
                e++;
            }
            if(cntc>n)
            m=max((e-s-1),m);
            else
            m=max((e-s),m);
           // m=max((e-s),m);
            if(cntc>n)break;
        }

    }
    cout<<m<<endl;
   // cout<<m<<" "<<i<<endl;
   // cout<<A<<endl;
}

}
