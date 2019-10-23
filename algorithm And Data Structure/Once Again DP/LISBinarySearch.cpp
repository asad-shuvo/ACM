#include <bits/stdc++.h>
using namespace std;
int fx4[] = {1 , -1 , 0 , 0};
int fy4[] = {0 , 0 , 1 , -1};
int Kfx[]= {-2,-2,2,2,1,1,-1,-1}; ///knight move x - exis
int Kfy[]= {1,-1,1,-1,2,-2,2,-2}; ///knight move y- exis
int fx8[]= {1,1,1,0,0,-1,-1,-1};
int fy8[]= {0,1,-1,1,-1,0,1,-1};
#define ll long long int
#define pii pair<int,int>
#define llu unsigned long long
#define Mx 100005
#define mx 1005

#define gama 0.57721566490
#define PI              acos(-1.0)
#define INF             0x7fffffff
#define MOD             1000000007
#define EPS             1e-7
//8 1 9 8 3 4 6 1 5 2
const int inf = 2000000000; // a large value as infinity
int n; // the number of items in the sequence
int Sequence[100005]; // the sequence of integers
int pos[100005]; // L[] as described in the algorithm
int I[100005]; // I[] as described in the algorithm
void takeInput()
{
    n=0;
    int k;
    while(scanf("%d",&Sequence[n])!=EOF)
    {
        n++;
    }
    //  n=n-1;
    //cout<<n<<endl;
    /* scanf("%d", &n); // how many numbers in the sequence ?
     for( int i = 0; i < n; i++ ) // take the sequence
     scanf("%d", &Sequence[i]);*/
}
int LisNlogK()   // which runs the NlogK LIS algorithm
{
    int i; // auxilary variable for iteration

    I[0] = -inf; // I[0] = -infinite
    for( i = 1; i <= n; i++ ) // observe that i <= n are given
        I[i] = inf; // I[1 to n] = infinite
    int LisLength = 0; // keeps the maximum position where a data is inserted
    for( i = 0; i < n; i++ )   // iterate left to right
    {
        int low, high, mid; // variables to perform binary search
        low = 0; // minimum position where we to put data in I[]
        high = LisLength; // the maximum position
        while( low <= high )   // binary search to find the correct position
        {
            mid = ( low + high ) / 2;
            if( I[mid] < Sequence[i] )
                low = mid + 1;
            else
                high = mid - 1;
        }
// observe the binary search carefully, when the binary search ends
// low > high and we put our item in I[low]
        I[low] = Sequence[i];
        pos[i]=low;
        if( LisLength < low ) // LisLength contains the maximum position
            LisLength = low;
    }
    return LisLength; // return the result
}
int main()
{
    takeInput();
    int lisLength = LisNlogK();
    printf("%d\n", lisLength);
    printf("-\n");
    int curr=n-1;
    for(int i=n-1; i>=0; i--)
    {
        if(pos[i]==lisLength)
        {
            curr=i;
            break;
        }
    }
    vector<ll>v;
    lisLength--;
    ll val=Sequence[curr];
    v.push_back(val);
    for(int i=curr; i>=0; i--)
    {
        if(pos[i]==lisLength and val>Sequence[i])
        {
            lisLength--;
            val=Sequence[i];
            v.push_back(Sequence[i]);
        }
    }
    for(int i=v.size()-1; i>=0; i--)
    {
        printf("%lld\n",v[i]);
    }

}
