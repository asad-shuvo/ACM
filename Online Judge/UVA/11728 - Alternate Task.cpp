#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,k,l,sum,d,t=0,arr[10000];
    while(scanf("%d",&n)!=EOF && n>0){
    int m=n;
    int f=0;
    t++;
    int p=0;
    for(i=1;i<=n;i++){
            sum=0;
            k=i;
        for(j=1;j<=k;j++){
            if(k%j==0){
                sum+=j;
                //cout<<sum<<endl;
            }
        }
        if(sum==m){
            //break;
            f=1;
            //arr[p++]=i;
            d=i;
            //printf("Case %d: %d\n",t,d);
           // break;
        }
    }
    //for(i=0;i<p;i++){

   // }

    if(f==0){
        printf("Case %d: -1\n",t);
    }
    else
       printf("Case %d: %d\n",t,d);

}
    return 0;
   // printf("%d ",d);*/
  // }
}
