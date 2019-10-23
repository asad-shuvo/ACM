#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    int n,i,j,m,arr[10000],a[10000],f,c;
   while(scanf("%d%d",&n,&m)!=EOF){
        c=0;
    for(i=0;i<n;i++){
            f=0;
        for(j=0;j<m;j++){
            scanf("%d",&arr[i]);
            if(arr[i]==0)
                f=1;
        }
        if(f==1)
            c++;
    }
    printf("%d\n",n-c);
   }
   return 0;
}
