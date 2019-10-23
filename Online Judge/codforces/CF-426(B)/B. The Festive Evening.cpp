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
    int arr1[100]={0},arr2[100]={0};
    int n,d;
    sc2(n,d);
    string A;
    cin>>A;
    for(int i=0;i<A.size();i++){
        arr1[A[i]-'0']++;
    }
    int door=0,f=0;
    int arr3[100]={0},arr4={0};
    for(int i=0;i<A.size();i++){
        if(arr2[A[i]-'0']==0){door++;arr2[A[i]-'0']++;}
        else arr2[A[i]-'0']++;
        if(door>d)f=1;
        if(arr2[A[i]-'0']==arr1[A[i]-'0'])door--;

    }
    if(f==0)pr("NO\n");
    else pr("YES\n");
}

