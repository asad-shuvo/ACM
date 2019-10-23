#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000],i,j,k,l,m,n;
    vector<int>v;
    cin>>n>>m;
    while(n--){
        for(i=0;i<m;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+m);
        v.push_back(arr[0]);
    }
    sort(v.begin(),v.end());
    int p=v.size()-1;
   // for(i=0;i<v.size();i++)
    //cout<<v[n]<<endl;
    cout<<v[p]<<endl;
}
