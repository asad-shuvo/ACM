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
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

#define M 55
vector<int> ans, depends[M];
int taken[M];

// depends[i] contains all the items that item i is depending on
// when taken[i] = 1, that means it's already taken

void take( int p ) {
    if( !taken[ p ] ) {
        // i am taking all the items that i should take before p
        for(int i=0; i<depends[p].size(); i++)
            take( depends[p][i] );
        ans.push_back( p ); // now i can take it
        taken[p] = 1;
    }
}

int main() {
    // input routine
    // .....
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
            int x,y;
    cin>>x>>y;
        depends[x].push_back(y);
    }
    for(int i=1; i<=n; i++) take( i );
    for(int i=0; i<n; i++) printf("%d\n", ans[i] );

    return 0;
}

