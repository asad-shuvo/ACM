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
#define mx 100005
int tree[mx*3],arr[mx];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)return mx;
    if(b>=i && e<=j) return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    int i,n,q,test,te=0;
    sc("%d",&test);
    while(test--){
    sc("%d%d",&n,&q);
    for(i=1;i<=n;i++){
    sc("%d",&arr[i]);
    }
    init(1,1,n);
            pr("Case %d:\n",++te);

    while(q--){
        int a,b;
        sc("%d%d",&a,&b);
        pr("%d\n",query(1,1,n,a,b));
    }
}
}

