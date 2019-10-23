#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Mx 100005
#define mx 1000005
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
}
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
ll arr[mx],cnter=0;
    ll arr1[mx];
 ll nod[mx];
ll divisor(ll M)
{
   // ll cnt=1;
    ll i;
	ll cnt = 0;
	for( i=1; i*i < M; i++ )
		if( M % i == 0 )
			cnt += 2;
	if( i * i == M )
		cnt++;
	return cnt;
}
int main()
{
    //FILE

    mem(arr,0);
    mem(nod,0);
    mem(arr1,0);
    sieve();
ll    F=1;
    arr[0]=1;
    nod[arr[0]]=1;
    for(ll i=1;i<=mx;i++){
        arr[i]=arr[i-1]+divisor(arr[i-1]);
        nod[arr[i]]=1;
        if(arr[i]>mx){
            break;
        }
    }
    ll M=0;
    arr[0]=0;
    arr1[0]=0;

    for(ll i=1;i<=1000000;i++){
            if(nod[i]==1){
              arr1[i]=arr1[i-1]+1;
            }
            else
                arr1[i]=arr1[i-1];
    //arr[i]=M;
           // if(nod[i]==1)arr1[i]=arr[i-1]+1;
            //else
              //  arr[i]=arr[i-1];
        //if(arr[i]>0)M++;
     //   arr1[i]=M;
    }
    ll a,b,test,te=0;
    sc("%lld\n",&test);
    while(test--){
    sc("%lld%lld",&a,&b);
int        cnttt=0;
     //   if(arr[a]>0  || arr[b]>0)cnttt=1;
            pr("Case %lld: %lld\n",++te,(arr1[b]-arr1[a-1]));
    }
}

