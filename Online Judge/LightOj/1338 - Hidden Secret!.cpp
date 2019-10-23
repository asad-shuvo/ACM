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
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
int main()
{
    string a,b;
    int test,te=0;
    sc1(test);
    getchar();
    while(test--){
    getline(cin,a);
    getline(cin,b);
    //cin>>a>>b;
    int f=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=(a[i]-'A')+'a';
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]>='A' && b[i]<='Z'){
            b[i]=(b[i]-'A')+'a';
        }
    }
    int cnt1[30]={0},cnt2[30]={0};
    for(int i=0;i<a.size();i++){
        if(a[i]>='a' && a[i]<='z'){
            cnt1[a[i]-'a']++;
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]>='a' && b[i]<='z'){
            cnt2[b[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(cnt1[i]!=cnt2[i]){
            f=1;
            break;
        }
    }
    if(f==0)
    pr("Case %d: Yes\n",++te);
    else
        pr("Case %d: No\n",++te);
    }
        //cout<<cnt1[i]<<" ";
}

