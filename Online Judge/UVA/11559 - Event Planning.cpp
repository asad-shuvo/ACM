#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    int n,bud,hotl,wks,htlcst,aw[10000],cost[10000],t,i,j,k,g;
    while(scanf("%d%d%d%d",&n,&bud,&hotl,&wks)!=EOF){
            g=0;
    for(i=0;i<hotl;i++){
        scanf("%d",&htlcst);
        for(j=0;j<wks;j++){
            scanf("%d",&aw[j]);
        }
        sort(aw,aw+wks);
            if(aw[wks-1]>=n)
        {
            t=htlcst*n;
            {
                if(t<=bud)
                    cost[g++]=t;
            }
        }
    }
    if(g==0)
        printf("stay home\n");
        else {
            sort(cost,cost+g);
            printf("%d\n",cost[0]);
        }
    }
    return 0;
}
