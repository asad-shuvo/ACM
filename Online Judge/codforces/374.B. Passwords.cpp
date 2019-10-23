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
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
int main()
{
   int n,t;
   sc("%d%d",&n,&t);
   vector<string>V;
   while(n--){
        string a;
   cin>>a;
    V.p_b(a);
   }
   string b1;
   cin>>b1;
   int s=0,b=0,simi=0;
//   sort(V.begin(),V.end());
   for(int i=0;i<V.size();i++){
    if(b1.size()>V[i].size())s++;
    if(b1.size()==V[i].size())simi++;
  //  if(b.size()<V[i].size())cntb++;
   }
   int B=(s/t)*5+s+1;
   int W=((s+(simi-1))/t)*5+(s+(simi-1))+1;
   cout<<B<<" "<<W<<endl;
  //  cout<<V[i]<<endl;
}

