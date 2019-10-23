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
    int arr[100005],sum=0,plc=-1;
    string A;
    cin>>A;
    for(int i=0;i<A.size();i++){
        arr[i]=A[i]-'0';
        sum+=arr[i];
    }
    int M=-1;
    if((arr[A.size()-1]%2)==1 && (arr[A.size()-2]%2)==1)
    pr("-1\n");
    else if((arr[A.size()-1]%2)==1 && (arr[A.size()-2]%2)==0){
        sum-=arr[A.size()-2];
        if(sum%3==0 && sum/3>=2)
            plc=A.size()-2;
    }
    else{
        for(int i=0;i<A.size();i++){
            int temp=sum;
            temp-=arr[i];
            if(temp%3==0 && temp/3>=2){
                if(temp>M){
                    M=temp;
                    plc=i;
                }
            }
        }
    }
    if(plc>-1){
        cout<<plc<<endl;
    }
}

