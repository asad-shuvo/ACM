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
    int n,arr[100005],cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    sc("%d",&n);
    for(int i=0;i<n;i++){sc("%d",&arr[i]);
    if(arr[i]==1)cnt1++;
    if(arr[i]==2)cnt2++;
    if(arr[i]==3)cnt3++;
    if(arr[i]==4)cnt4++;
    }
   int cnt=0;
   cnt+=cnt4;
   if(cnt3>=cnt1){
    cnt+=cnt3;
    cnt1=0;
    cnt3=0;
   }
   else if(cnt3<cnt1){
    cnt+=cnt3;
    cnt1-=cnt3;
    cnt3=0;
   }
   if(cnt2>=2){
    if(cnt2%2==0){cnt+=(cnt2/2);cnt2=0;}
    else{
        cnt+=(cnt2/2);cnt2=1;}
    }
    if(cnt2==1){
        cnt+=1;
        if(cnt1>=2){
            cnt1-=2;
        }
        else
            cnt1=0;
    }
    if(cnt1%4==0){cnt+=(cnt1/4);}
    else
    {
        cnt+=(cnt1/4);
        cnt+=1;
    }
    pr("%d\n",cnt);
   }


