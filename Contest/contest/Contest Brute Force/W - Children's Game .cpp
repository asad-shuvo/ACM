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
bool cmp(string x,string y)
{
    if((x+y)>(y+x))return true;
    else
        return false;
}
int main()
{
    int test;
        int n;
    while(sc("%d",&n)&&n>0){

    string A[55];
    for(int i=0;i<n;i++)cin>>A[i];
    sort(A,A+n,cmp);
    for(int i=0;i<n;i++)
        cout<<A[i];
    cout<<endl;
}
}
