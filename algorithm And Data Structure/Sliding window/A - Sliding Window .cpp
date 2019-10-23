#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>
#include<numeric>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
#include<list>
#include<iterator>
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
int arr[1000005];
vector<int>v1,v2;
void maxandmin(int n,int k)
{
    deque<int>S(k),G(k);
    int i=0;
    F(i,0,k-1){
    while(!S.empty() && arr[S.back()]>=arr[i])S.pop_back();
    while(!G.empty() && arr[G.back()]<=arr[i])G.pop_back();
    G.p_b(i);
    S.p_b(i);
    }
    for( ; i<n;i++){
        v1.p_b(arr[S.front()]);
        v2.p_b(arr[G.front()]);
        while(!S.empty() && S.front()<=i-k)S.pop_front();
        while(!G.empty() && G.front()<=i-k)G.pop_front();
        while(!S.empty() && arr[S.back()]>=arr[i])S.pop_back();
        while(!G.empty() && arr[G.back()]<=arr[i])G.pop_back();
        G.p_b(i);
        S.p_b(i);
    }
    v1.p_b(arr[S.front()]);
        v2.p_b(arr[G.front()]);
}
int main()
{
    int n,i,k;
    sc2(n,k);
    F(i,0,n-1)sc1(arr[i]);
    maxandmin(n,k);
    F(i,0,v1.size()-1)cout<<v1[i]<<" ";

    cout<<endl;
    F(i,0,v2.size()-1)cout<<v2[i]<<" ";

    cout<<endl;
    }

