#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]={-2,-2,2,2,1,1,-1,-1};///knight move x - exis
int Kfy[]={1,-1,1,-1,2,-2,2,-2};///knight move y- exis
int fx8[]={1,1,1,0,0,-1,-1,-1};
int fy8[]={0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define Mx 100005
#define mx 1005
#define inf 1<<28
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
ll  tree[Mx*4],lazy[Mx*4],arr[Mx];
void update(ll  node , ll  b , ll  e , ll  i ,
                     ll  j , ll  value )
{

    if (lazy[node ] != 0)
    {
        tree[node ] += (e -b +1)*lazy[node ];
        if (b  != e )
        {
            lazy[node *2 + 1]   += lazy[node ];
            lazy[node *2 + 2]   += lazy[node ];
        }
        lazy[node ] = 0;
    }
    if (b >e  || b >j  || e <i )
        return ;
    if (b >=i  && e <=j )
    {
        tree[node ] += (e -b +1)*value ;
        if (b  != e )
        {
            lazy[node *2 + 1]   += value ;
            lazy[node *2 + 2]   += value ;
        }
        return;
    }

    ll  mid = (b +e )/2;
    update(node *2+1, b , mid, i , j , value );
    update(node *2+2, mid+1, e , i , j , value );

    tree[node ] = tree[node *2+1] + tree[node *2+2];
}

ll  query(ll  node,ll  b , ll  e , ll  i , ll  j )
{
    if (lazy[node ] != 0)
    {

        tree[node ] += (e -b +1)*lazy[node ];
        if (b  != e )
        {
            lazy[node *2+1] += lazy[node ];
            lazy[node *2+2] += lazy[node ];
        }

        lazy[node ] = 0;
    }

    if (b >e  || b >j  || e <i )
        return 0;

    if (b >=i  && e <=j )
        return tree[node ];

    ll  mid = (b  + e )/2;
    return query( 2*node +1,b , mid, i , j ) +
           query( 2*node +2,mid+1, e , i , j );
}



/*void init(ll  b , ll  e , ll  node )
{
    if (b  > e )
        return ;

    if (b  == e )
    {
        tree[node ] = arr[b ];
        return;
    }

    ll  mid = (b  + e )/2;
    constructSTUtil(b , mid, node *2+1);
    constructSTUtil(mid+1, e , node *2+2);

    tree[node ] = tree[node *2 + 1] + tree[node *2 + 2];
    //for(ll  )
}
*/
void init( ll  n)
{
    for(ll  i=0;i<=n*4;i++){
        tree[i]=0;
        lazy[i]=0;
    }
    //constructSTUtil(0, n-1, 0);
}

int  main()
{
    ll  n,q;
    int test,te=0;
    sc1(test);
    while(test--){
    sc("%lld%lld",&n,&q);
    init(n);
    pr("Case %d:\n",++te);
    while(q--){
            int  option;
    sc1(option);
    if(option==0){
            ll  i,j,val;
    sc("%lld%lld%lld",&i,&j,&val);
    update(0,0,n-1,i,j,val);
    }
    if( option ==1){
        ll  i,j;
        sc("%lld%lld",&i,&j);
        pr("%lld\n",query(0,0,n-1,i,j));
    }
    }
}
}
