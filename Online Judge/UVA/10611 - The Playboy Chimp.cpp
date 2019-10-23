#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,p,l,m,n,arr[50005],a[50005];
    while(scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        for(j=n-1;j>=0;j--){
            if(a[i]>arr[j])
            {
                p=arr[j];
                break;
            }
            else
                p=0;
        }
        for(k=0;k<n;k++){
            if(a[i]<arr[k]){
                l=arr[k];
                break;
            }
             else
                l=0;
        }
        if(p==0)
        printf("X %d\n",l);
        else if(l==0)
        printf("%d X\n",p);
        else
        printf("%d %d\n",p,l);
    }
    }
    return 0;
}
