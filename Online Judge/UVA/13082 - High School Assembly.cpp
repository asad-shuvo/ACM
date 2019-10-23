#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000],i,j,k=0,l,m,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++){
    if(arr[i]> arr[i+1] && arr[i]>arr[i-1]){
        arr[i]=arr[n-i];
        k++;
        i=0;
    }
   }
    printf("%d",k);
}
