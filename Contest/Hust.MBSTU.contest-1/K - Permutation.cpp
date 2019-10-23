#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m,sum,arr[5005],a[5005];
    while(scanf("%d",&n)!=EOF){
            k=0;
    sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        a[k++]=i+1;
    }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i]==arr[j]){
            sum++;
            break;
        }
    }
   }
    printf("%d\n",n-sum);    }
    return 0;
}
