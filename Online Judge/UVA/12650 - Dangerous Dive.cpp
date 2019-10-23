#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,arr[100005],a[100005],mr[100005],f;
    while(scanf("%d%d",&m,&n)!=EOF){
            k=0;
    l=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     if(m==n)
            printf("*\n");
            else{
    sort(arr,arr+n);
    for(i=1;i<=m;i++){
        a[k++]=i;
    }
    for(i=0;i<k;i++){
            f=0;
        for(j=0;j<n;j++){
            if(a[i]==arr[j]){
                f=1;
                break;
            }
        }
           if(f==0)
            {
                mr[l++]=a[i];
            }
    }
    for(i=0;i<l;i++){
        printf("%d ",mr[i]);
    }
    printf("\n");
    }
    }
    return 0;
}
