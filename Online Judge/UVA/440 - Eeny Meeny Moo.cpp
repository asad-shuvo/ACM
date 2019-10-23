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
int n;
int chk(int u)
{
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.p_b(i);
    }
    int c=0;
    while(v[c]!=2){
                        v.erase(v.begin()+c);
        c+=u-1;
         if(c>=v.size()){
                c=c%v.size();
        }
    }
    return v.size()==1;
    //cout<<v[0]<<endl;
}
int main()
{
    while(sc1(n)&&n>0){
   // int m=5;
   // cout<<chk(m)<<endl;
   int m=1;
    while(chk(m)!=1){
        m++;
    }
    cout<<m<<endl;
}

}

