#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long
llu arr[200][200];
int main()
{

    llu n,m,i,j,k,l;
    while(scanf("%llu%llu",&n,&m)){
            if(n==0 && m==0)
            break;
    arr[1][1]=1;
    arr[1][0]=1;
    for(i=2;i<=n;i++){
        arr[i][0]=1;
        for(j=1;j<=i;j++){
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }
    printf("%llu\n",arr[n][m]);
    }
}
