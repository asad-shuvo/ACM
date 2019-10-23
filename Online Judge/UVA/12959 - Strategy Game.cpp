#include <bits/stdc++.h>
using namespace std;
int arr[1000000],a[1000000];
int main()
{
    int m,n,s,sum,i,k,j,l;
    while(scanf("%d%d",&n,&m)!=EOF){
    s=n*m;
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    k=0;
    for(i=0;i<n;i++){
            sum=0;
        for(j=i;j<s;j=j+n){
            sum=sum+arr[j];
        }
       // printf("%d ",sum);
    a[k++]=sum;
    }
    int mx=a[0];
    int p;
    for(i=0;i<k;i++){
        if(a[i]>=mx){
            mx=a[i];
            p=i+1;
        }
    }
    printf("%d\n",p);
    }
    return 0;
}
