#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pf printf
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

int main()
{
   // FILE
    int n,arr[10000];
    int i,m=0;
    while(sc("%d",&n)!=EOF){
      //      m++;
    //if(m>1) pf("\n");
    FOR(i,0,n-1){
    sc("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int tk,j;
    int mn=1000005,fst,snd;
    sc("%d",&tk);
    FOR(i,0,n-1){
    FOR(j,i+1,n-1){
    if(arr[i]+arr[j]==tk){
        int now=abs(arr[j]-arr[i]);
        if(now<mn){
            mn=now;
            fst=arr[i];
            snd=arr[j];
        }
    }
    }
    }
pf("Peter should buy books whose prices are %d and %d.\n\n",fst,snd);
    }
    /*int k,l;
    l=0;
    int j=8;
    FOR(k,l,j-1){
    cout<<"1"<<endl;
    }*/
}
