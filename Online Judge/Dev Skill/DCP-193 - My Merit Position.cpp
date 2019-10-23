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
struct st{
    dd a;
    string N;
    bool operator < (const st& p) const {
        if(a>p.a)
    return a > p.a;
    if(a==p.a)
        return N<p.N;
  }
};
vector<st>v;
int main()
{
   // FILE
    int i,t;
    sc1(t);
    F(i,1,t)
    {
        string name;
        dd cgpa;
        cin>>name>>cgpa;
        st s;
        s.N=name;
        s.a=cgpa;
        v.p_b(s);
    }
    sort(v.begin(),v.end());
               int temp=0;
    for(int i=0;i<v.size();i++){
            if(i==0)temp++;
            if(i!=0){
                if(v[i-1].a!=v[i].a){
                    temp++;
                }
            }
    cout<<temp<<"."<<v[i].N<<endl;
    }
}

