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
    string A,B;
    int n,f1,f2,f3,f4;
    cin>>A>>B;
    cin>>n;
    n=n%4;
    if(A=="v") f1=1;
    if(A=="<") f1=2;
    if(A=="^") f1=3;
    if(A==">") f1=4;
    if(B=="v") f2=1;
    if(B=="<") f2=2;
    if(B=="^") f2=3;
    if(B==">") f2=4;
    int cnt=f1;
    for(int i=1;i<=n;i++){
        if(cnt+1>4)cnt=1;
        else cnt++;
    }
  //  cout<<cnt<<endl;
    int fl=0,fl1=0;
    if(cnt==f2) fl=1;
    cnt=f1;
    for(int i=1;i<=n;i++){
        if(cnt-1<1)cnt=4;
        else cnt--;
    }
    if(cnt==f2)fl1=1;
    if(fl1==1 && fl==1)cout<<"undefined"<<endl;
    if(fl==1 && fl1==0)cout<<"cw"<<endl;
    if(fl==0 && fl1==1)cout<<"ccw"<<endl;
}

