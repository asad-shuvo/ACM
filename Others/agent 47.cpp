#include <bits/stdc++.h>
using namespace std;
inline int _Int(){ int x; scanf( "%d", &x ); return x; }
int n;
int Health[15];
char Destroy[15][15];
int dp[ (1<<15)+3 ];
int bitmask_dp( int mask ){
    if( mask == ( 1<<n )-1 )return 0;
    if( dp[mask] != -1 )return dp[mask];
    dp[mask] = INT_MAX;
    for( int i = 0; i < n; i++ ){
        if( !(mask&(1<<i)) ){
            for(int j = 0; j < n; j++){
                if( (mask&(1<<j)) ){
                    int x = Destroy[j][i]-'0';
                    if(!x)continue;
                    int y = Health[i]/x;
                    if(Health[i]%x)y++;
                    dp[mask] = min( dp[mask], y+bitmask_dp( ( mask|(1<<i) ) ) );
//                    cout<<i<<" "<<j<<" "<<dp[mask]<<endl;
                }
            }
            dp[mask] = min( dp[mask], Health[i]+bitmask_dp( ( mask|(1<<i) ) ) );
        }
    }
    return dp[mask];
}
int main(){
    int t = _Int(), cs = 0;
    while(t--){
        n = _Int();
        memset(dp, -1, sizeof(dp));
        for( int i = 0; i < n; i++ ) Health[i] = _Int();
        for( int i = 0; i < n; i++ ) scanf( "%s", Destroy[i] );
        int mn = INT_MAX;
        for( int i = 0; i < n; i++ ){
            mn = min( mn, Health[i] + bitmask_dp( (1<<i) ) );
        }
        printf( "Case %d: %d\n", ++cs,  mn );
    }
    return 0;
}
