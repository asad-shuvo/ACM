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
#define scl1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define scl2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)

int main()
{
    int n,k;
    sc2(n,k);
    int i,arr[Mx];
    F(i,0,n-1)sc1(arr[i]);
    int start=0,End=0,sum=0,msum=0;
    for(i=0;i<n;i++){
        sum+=arr[End++];
        if(sum>k)
        break;
    }
    if(sum>k)
    msum=max(msum,(End-start-1));
    else msum=max(msum,(End-start));
//cout<<msum<<endl;
    //sum+=arr[i];
    while(End<n){
        while(sum>k)sum-=arr[start++];
        while(End<n){
            sum+=arr[End++];
            //cout<<sum<<endl;
            if(msum<(End-start)){
                msum=(End-start);
                if(sum>k)msum--;
            }
          //  msum=max(msum,(End-start));cout<<msum<<endl;
            if(sum>k){

                break;
            }
    }
    }
    cout<<msum<<endl;
}
  //  cout<<sliding_window(n,k,arr);

