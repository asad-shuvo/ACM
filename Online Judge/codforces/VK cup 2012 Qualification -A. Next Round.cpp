#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k,l,arr[100005];
    cin>>n>>k;
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int p=arr[k-1],sum=0;
    for(i=0;i<n;i++){
        if(arr[i]>=p && arr[i]!=0)
            sum++;
    }
    cout<<sum<<endl;
}
