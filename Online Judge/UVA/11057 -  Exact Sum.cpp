#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000],i,j,k,l,m,n,f=0,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    //sort(arr,arr+n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j && arr[i]+arr[j]==sum)
            {
                if(arr[i]<arr[j])
                printf("%d %d",arr[i],arr[j]);
                else
                    printf("%d %d",arr[j],arr[i]);
                f=1;
                break;
            }
        }
        if(f==1)
            break;
    }
}
