#include <bits/stdc++.h>
using namespace std;
#define mx 20000
#define ll long long int
#define f_i freopen("input.txt","rt",stdin);
#define f_o freopen("out.txt","wt",stdout);
//ll arr[4]={2,3,5,7};
vector<ll>humble;
map<ll,ll>mp;
//bool vis[mx];
void func(ll v){
if(mp[v]>0 || v>2000000000) return;
mp[v]++;

humble.push_back(v);
func(v*2);
func(v*3);
func(v*5);
func(v*7);
//for(ll i=0;i<4;i++){
  //  func(v*arr[i]);
//}
}
int main()
{
   // f_i
   // f_o
    ll n;
  //  for(ll i=0;i<mx+1;i++)
//        vis[i]=0;
    func(1);
    sort(humble.begin(),humble.end());
  while(scanf("%lld",&n)!=EOF && n>0){
        ll rem1,rem2;
        ll m=n;
 rem1=m%10;
 m=m/10;
 rem2=m%10;
 if(rem1==1 && (rem2==0 || rem2>1))
    printf("The %lldst humble number is %lld.\n",n,humble[n-1]);
  //  printf("%lldst",n);
 else if(rem1==1 && rem2==1)
 printf("The %lldth humble number is %lld.\n",n,humble[n-1]);
    //printf("%lldth",n);
     else if(rem1==2 && (rem2==0 || rem2>1))
       printf("The %lldnd humble number is %lld.\n",n,humble[n-1]);
   // printf("%lldnd",n);
 else if(rem1==2 && rem2==1)
  printf("The %lldth humble number is %lld.\n",n,humble[n-1]);
    //printf("%lldth",n);
     else if(rem1==3 && (rem2==0 || rem2>1))
     printf("The %lldrd humble number is %lld.\n",n,humble[n-1]);
    //printf("%lldrd",n);
 else if(rem1==3 && rem2==1)
  printf("The %lldth humble number is %lld.\n",n,humble[n-1]);
  //  printf("%lldth",n);
    else
          printf("The %lldth humble number is %lld.\n",n,humble[n-1]);
 //if(rem1==1 && rem2>1)
   // cout<<humble[n-1]<<endl;
  }
}
