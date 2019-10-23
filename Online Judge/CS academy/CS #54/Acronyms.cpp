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
    vector<char>vc;
    vector<string>vs;
    string A;
    int n;
    sc1(n);
    map<char,int>mp;
    for(int i=1;i<=n;i++){
        cin>>A;
        vs.p_b(A);
        mp[A[0]]++;
        //vc.p_b(A[0]);
    }
  /*  sort(vc.begin(),vc.end());
    for(int i=0;i<vs.size();i++){
        sort(vs[i].begin(),vs[i].end());
    }
    for(int i=0;i<vs.size();i++){

    }*/
    int cnt=0;
    for(int i=0;i<vs.size();i++){
            int cntcr=0;
            map<char,int>mp2;
            mp2=mp;
        for(int j=0;j<vs[i].size();j++){
            if(j==0){
                if(mp2[vs[i][j]]>=2){
                cntcr++;
                mp2[vs[i][j]]--;
                mp2[vs[i][j]]--;
                }
            }
    else{
        if(mp2[vs[i][j]]>=1){
            cntcr++;
            mp2[vs[i][j]]--;
        }
    }
        }
        if(cntcr==vs[i].size())cnt++;
        }
    pr("%d\n",cnt);
}

