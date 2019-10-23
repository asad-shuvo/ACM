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
    ll k;
    int n;
    sc("%d%lld",&n,&k);
    // int
    if(k>n)
        k=n;
    queue<int>q;
    for(int i=1; i<=n; i++)
    {
        int x;
        sc1(x);
        q.push(x);
    }
    ll sum=0,flag=0;
    int s1,s2;
    // s1=q.front();
    // q.pop();
    //s2=q.front();
    //q.pop();
    int ret;
    while(1)
    {
        if(flag==0)
        {
            s1=q.front();
            q.pop();
            s2=q.front();
            q.pop();
            if(s1>s2)
            {
                sum++;
                if(sum==k)
                {
                    ret=s1;
                    break;
                }
                q.push(s2);
                s2=0;

            }
            else if(s2>s1)
            {
                sum++;
                if(sum==k)
                {
                    ret=s2;
                    break;
                }
                q.push(s1);
                s1=0;

            }
            flag++;
        }
        else
        {
            int f1=0,f2=0;
            if(s1==0)
            {
                s1=q.front();
                f1=1;
                q.pop();
            }
            else if(s2==0)
            {
                s2=q.front();
                f2=1;
                q.pop();
            }
            if(s1>s2)
            {
                //s2=0;
                if(f1==1){
                    sum=1;
                }
                else sum++;
                q.push(s2);
                s2=0;
                if(sum==k)
                {
                    ret=s1;
                    break;
                }
            }
            else if(s2>s1)
            {
                if(f2==1)
                {
                    sum=1;
                }
                else sum++;
                q.push(s1);
                s1=0;
                if(sum==k)
                {
                    ret=s2;
                    break;
                }
            }
        }
    }
    pr("%d\n",ret);
}

