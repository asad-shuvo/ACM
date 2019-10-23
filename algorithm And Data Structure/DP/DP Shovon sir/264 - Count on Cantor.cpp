#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
#define mx 1000
int main()
{
    int n;
    int present,prev;
   while(sc("%d",&n)!=EOF){
    int sum=0;
    for(int i=1; ;i++){
        sum+=i;
        if(sum>=n){
            present=i;
            break;
        }
    }
    int aq=sum-n;
    if(present%2==0){
            pr("TERM %d IS %d/%d\n",n,present-aq,aq+1);
       // cout<<present-aq<<"/"<<aq+1;
    }
    if(present%2!=0){
        pr("TERM %d IS %d/%d\n",n,aq+1,present-aq);
      //  cout<<aq+1<<"/"<<present-aq;
    }
}
}

