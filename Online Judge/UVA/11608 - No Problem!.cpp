#include <bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("input.txt","rt",stdin);
    int i,j,k=0,l,m,n=12,arr[100],a[100],sum,test;
    while(scanf("%d",&m)!=EOF){
        k++;
            sum=0;
            if(m<0)
            break;
             printf("Case %d:\n",k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum=sum+m;
    for(i=0;i<n;i++){
        if(sum>=a[i])
        {
            sum=sum-a[i];
            printf("No problem! :D\n");
        }
        else
        {
            printf("No problem. :(\n");
    }
    sum=sum+arr[i];
}
    }
    return 0;
}
