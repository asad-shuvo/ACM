#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100005

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
#define FOR(i,a,b) for(i=a;i<=b;i++)
int main()
{
    int n,arr[mx],cnti=0,cntd=0,cntc=0,f=0;
    sc("%d",&n);
    for(int i=0;i<n;i++)sc("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(i>0){
            if(arr[i]>arr[i-1]){
                    if(cntd==1 || cntc==1){
                        f=1;
                        break;
                    }
                    else
                    cnti=1;
                    }
            if(arr[i]==arr[i-1]){
                    if(cntd==1){f=1;
                    break;
                    }
                    else
                    cntc=1;
            }
            if(arr[i]<arr[i-1]){
                    if(cnti==1)
                    {
                        cntc=1;
                        cntd=1;
                    }
            else{
                f=1;
                break;
            }
        }
    }
    }
    if(f==0)pr("YES\n");
    else
        pr("NO\n");
}

