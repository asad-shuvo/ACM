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
#define inf 1<<28
#define gama 0.57721566490
#define PI              acos(-1.0)
#define INF             0x7fffffff
#define MOD             1000000007
#define EPS             1e-7
#define mx 1000000
bool status[mx+2];



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
#define scL1(a) scanf("%lld",&a)
#define scL2(a,b) scanf("%lld%lld",&a,&b)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define scL3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define forr(i, a, b)   for (__typeof (a) i=a; i<=b; i++)
#define rof(i, b, a)    for (__typeof (a) i=b; i>=a; i--)
#define rep(i, n)       for (__typeof (n) i=0; i<n; i++)
#define Mx 100005
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0):cout.tie(0)
#define SIZE 10000000
bool a[SIZE + 2];
int main()
{

    vector <int> prime;
    int t;
    int x;
    int y;
    int n;
    int count;

    a[0] = true;
    a[1] = true;

    for (int i = 2; i <= SIZE; i++) {
        if(a[i] == false) {
            prime.push_back(i);
            for (int j = 2 * i; j <= SIZE; j = j + i) {
                a[j] = true;
            }
        }
    }

    scanf("%d", &t);

    for (int cs = 1; cs <= t; cs++) {
        scanf("%d", &n);
        count = 0;

        for (int i = 0; true; i++) {
            x = prime[i];
            y = n - x;
            if(x > y) {
                break;
            }

            if(a[y] == 0) {
                count++;
            }

        }

        printf("Case %d: %d\n", cs, count);

    }


}
