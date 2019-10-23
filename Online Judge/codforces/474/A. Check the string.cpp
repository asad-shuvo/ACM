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
    string a;
    cin>>a;
    int suma=0,sumb=0,sumc=0;
    int f=0;
    int i,j,k;
    for( i=0;i<a.size();i++){
        if(a[i]=='a')suma++;
        if(a[i]=='b'){j=i;break;}
        if(a[i]=='c')f=1;
    }
    for(j=i;j<a.size();j++){
        if(a[j]=='b')sumb++;
        if(a[j]=='a'){f=1;break;}
        if(a[j]=='c'){k=j;break;}

    }
    for(k=j;k<a.size();k++){
        if(a[k]=='c')sumc++;
        if(a[k]=='a'){f=1;break;}
        if(a[k]=='b'){f=1;break;}
    }
    if(f==1)pr("NO\n");
    else if(suma==0 || sumb==0 || sumc==0)pr("NO\n");
    else if(f==0){
        if(sumc==suma || sumc==sumb)pr("YES\n");
        else pr("NO\n");
    }
}

