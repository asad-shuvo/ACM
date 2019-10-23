#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k,sum,p,arr[100],a[100];
    while(scanf("%d%d",&m,&n)!=EOF){
            k=0;
    sum=0;
    p=0;
    for(i=0;i<m;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<0)
            a[k++]=arr[i]*-1;
    }
   sort(a,a+k);
   //p=0;
   for(i=k-1;i>=0;i--){
        p++;
    sum=sum+a[i];
   if(p==n)
    break;
   }
   printf("%d\n",sum);
    }
    return 0;
}

