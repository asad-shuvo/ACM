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
    int n;
    sc("%d",&n);
    int m=n;
    vector<int>v1,v2,v3;
    while(n--){
        int m;
        sc("%d",&m);
        v1.p_b(m);
    }
    int cnt=0,sum;
    while(v1.size()>0){
            cnt++;
    if(cnt%2==1){
             sort(v1.begin(),v1.end());
        if(v1.size()==1){
            cout<<v1[0]<<endl;
            v2.p_b(v1[0]);
            sum+=v1[0];
            v1.erase(v1.begin()+0);
        }
        else{
            cout<<v1[0]<<endl;
            cout<<v1[1]<<endl;
            sum+=v1[1];
            v2.p_b(v1[0]);
            v2.p_b(v1[1]);
            v1.erase(v1.begin(),v1.begin()+2);
        }
    }
    if(cnt%2==0){
             sort(v1.begin(),v1.end());
        if(v1.size()==1){
            cout<<v1[0]<<endl;
            v2.p_b(v1[0]);
            sum+=v1[0];
            v1.erase(v1.begin()+0);
        }
        else{
            cout<<v1[1]<<endl;
            cout<<v1[2]<<endl;
            sum+=v1[2];
            v2.p_b(v1[1]);
            v2.p_b(v1[2]);
            v1.erase(v1.begin()+1);
            v1.erase(v1.begin()+1);
           // v1.erase(v1.begin(),v1.begin()+2);
        }
    }
    if(v2.size()==n)
    }
}

