#include <stdio.h>
#include <math.h>
#define MAX 100005
#include<bits/stdc++.h>
using namespace std;
int tree[MAX*4];  // To store e gment tree
int lazy[MAX*4];  // To store pending updates
int arr[MAX];
void update(int node , int b , int e , int i ,
                     int j , int value )
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

    int mid = (b +e )/2;
    update(node *2+1, b , mid, i , j , value );
    update(node *2+2, mid+1, e , i , j , value );

    tree[node ] = tree[node *2+1] + tree[node *2+2];
}

int query(int node,int b , int e , int i , int j )
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

    int mid = (b  + e )/2;
    return query( 2*node +1,b , mid, i , j ) +
           query( 2*node +2,mid+1, e , i , j );
}



/*void init(int b , int e , int node )
{
    if (b  > e )
        return ;

    if (b  == e )
    {
        tree[node ] = arr[b ];
        return;
    }

    int mid = (b  + e )/2;
    constructSTUtil(b , mid, node *2+1);
    constructSTUtil(mid+1, e , node *2+2);

    tree[node ] = tree[node *2 + 1] + tree[node *2 + 2];
    //for(int )
}
*/
void init( int n)
{
    for(int i=0;i<=n*4;i++){
        tree[i]=0;
        lazy[i]=0;
    }
    //constructSTUtil(0, n-1, 0);
}


int main()
{
    int n;
    scanf("%d",&n);
    init(n);
    update(0,0,n-1, 0,9, 10);
            cout<<query( 0,0, n-1,1, 6);
    return 0;
}

