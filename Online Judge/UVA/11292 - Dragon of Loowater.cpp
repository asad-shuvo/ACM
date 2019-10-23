#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    int m,n,i,j,k,l,sum,p,t,knigts[200005],heads[200005];
    while(scanf("%d%d",&m,&n)!=EOF){
            sum=0;
            if(m==0 && n==0)
            break;
    for(i=0;i<m;i++){
        scanf("%d",&heads[i]);
    }
    for(j=0;j<n;j++){
        scanf("%d",&knigts[j]);
    }
    if(n<m)
        printf("Loowater is doomed!\n");
    else{
    sort(heads,heads+m);
    sort(knigts,knigts+n);
    int z=0;
    k=0;
    for(i=0;i<n;i++){
        for(j=z;j<m;j++){
        if(knigts[i]>=heads[j]){
          k++;
          z++;
          sum+=knigts[i];
          break;
           }
        }
        if(k==m)
            break;
    }
    if(k<m)
        printf("Loowater is doomed!\n");
    else
        printf("%d\n",sum);
    }
    }
    return 0;
}
