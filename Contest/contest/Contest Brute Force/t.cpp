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
    VI v1,v2,v3;
    while(n--){
        int m;
        sc("%d",&m);
        v1.p_b(m);
    }
    sort(v1.begin(),v1.end());
    v1.erase(v1.begin(),v1.begin()+2);
    cout<<v1[0]<<endl;
    //v1.pop_back();
    cout<<v1.size()<<endl;
    /*
    cout<<v1.back()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1.back()<<endl;
*/
}

