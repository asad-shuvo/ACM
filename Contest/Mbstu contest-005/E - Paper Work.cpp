#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10000],i,j,k,a[10000],l,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=0;
    int p=0;
    int t=0;
    l=0;
    for(i=0;i<n;i++){
            t++;
        if(arr[i]<0){
            p++;
        }
        if(p==3){
            a[k++]=t-1;
    i=i-1;
    p=0;
    l++;
    t=0;

        }
        else if(p<3 && i==n-1){
            a[k++]=t;
            l++;
        }
    }
    printf("%d\n",l);
    for(i=0;i<k;i++){
        printf("%d ",a[i]);
    }

}
