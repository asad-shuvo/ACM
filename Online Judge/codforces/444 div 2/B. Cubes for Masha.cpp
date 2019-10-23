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
    int n;
    int arr[1000]={0};
    sc1(n);
    int A[20];
    for(int i=0;i<6*n;i++){
        sc1(A[i]);
    }
    int cnt=0;
    for(int i=0;i<6*n;i++){
        if(arr[A[i]]==0 && A[i]>0){
            //cnt++;
            arr[A[i]]=1;
        }
    }
    for(int i=0;i<6*n;i++){
        for(int j=0;j<6*n;j++){
                int r=abs(j-i);
            if(r>=6){
                int ret=A[i]+10*A[j];
                 if(arr[ret]==0 && ret>0){
            //cnt++;
            arr[ret]=1;
        }
            }
        }
    }
    int plc=0;
    for(int i=1;i<=100;i++)
    {
        if(arr[i]==0){
            plc=i;
            break;
        }
    }
        cout<<plc-1<<endl;
}

