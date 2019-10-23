#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    int i,j,k,arr[1000],n=12,sum;
    while(scanf("%d",&k)!=EOF){
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    sum=0;
    j=0;
    for(i=n-1;i>=0;i--){
           // j++;
        if(sum>=k)
            break;
            sum=sum+arr[i];
            j++;
    }
    if(sum<k)
        printf("-1\n");
        else
    printf("%d\n",j);
    }
    return 0;
}
