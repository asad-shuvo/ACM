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
int main()
{
    string A;
    int n;
    cin>>n;
    cin>>A;
    int cnt1=0,cnt0=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='1'){
                while(cnt0>1){
                    pr("0");
                    cnt0--;
                }
           cnt0=0;
            cnt1++;
        }
        if(A[i]=='0'){
              //  cnt1=0;
            //    cnt0++;
                if(cnt1>0)
            pr("%d",cnt1);
        cnt1=0;
        cnt0++;
            //cnt0++;
        }

    }
    if(cnt1>0)pr("%d",cnt1);
    for(int i=1;i<=cnt0;i++)pr("0");
      //  if(cnt0>1)pr("%d",cnt0-1);
    cout<<endl;
}
