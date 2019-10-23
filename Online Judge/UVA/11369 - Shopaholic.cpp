#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,b,c,d,arr[100000],test;
    cin>>test;
    while(test--){
    scanf("%d",&n);
    vector<int>v;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(i=n-1;i>=0;i--){
        v.push_back(arr[i]);
    }
    int sum=0;
    for(i=2;i<n;i=i+3){
        sum+=v[i];
        //cout<<v[i]<<endl;
    }
    cout<<sum<<endl;
    }
    return 0;
}
