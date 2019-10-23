#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,l,m,arr[10000],arr1[10000];
    cin>>n>>k;
    vector<int>v;
    int sum1=0,sum2=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum1+=arr[i];
    }
    for(i=0,j=i+1;i<n-1,j<n;i++,j++){
        if(arr[i]+arr[j]<k){
            l=k-(arr[i]+arr[j]);
            arr[j]+=l;
        }
    }
    for(i=0;i<n;i++)
        sum2+=arr[i];
    cout<<sum2-sum1<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;

}
