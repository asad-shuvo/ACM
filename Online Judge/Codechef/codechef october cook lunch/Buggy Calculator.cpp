#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
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
    ll a,b;
    int test;
    sc1(test);
    while(test--)
    {
        sc("%lld%lld",&a,&b);
        int sza=log10(a)+1;
        int szb=log10(b)+1;
        int mnD=min(sza,szb);
        int mxD=max(sza,szb);
        vector<int>v1,v2,v3;
        //int arra[100],arrb[100];
        ll p1=a,p2=b;
        while(p1>0)
        {
            int rem=p1%10;
            v1.p_b(rem);
            p1=p1/10;
        }
        while(p2>0)
        {
            int rem=p2%10;
            v2.p_b(rem);
            p2=p2/10;
        }

        for(int i=mnD-1; i>=0; i--)
        {
            int f=v1[i]+v2[i];
            f=f%10;
            v3.p_b(f);
            //  pr("%d",v1[i]+v2[i]);
        }
        for(int i=v1.size()-1; i>=mnD; i--)
        {
            if(i==mnD && v1[i]==0)
            {

            }
            else
                pr("%d",v1[i]);

        }
        for(int i=v2.size()-1; i>=mnD; i--)
        {
            if(i==mnD && v2[i]==0)
            {
            }
            else
                pr("%d",v2[i]);

        }
        for(int i=0; i<v3.size(); i++)
        {

           // else
           if(i==0 && v3[0]==0 && v3.size()==mxD && mxD!=1){

           }
                else pr("%d",v3[i]);
        }

        //for(int i=0;i<v1.size();i++){
        //  cout<<v1[i]<<" "<<v2[i]<<endl;
        //}*/
        pr("\n");
    }

}
