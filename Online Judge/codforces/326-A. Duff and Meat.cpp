#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100005];
    vector<int>v1,v2,v3;
    int arr1[100005],arr2[100005];
    int i,j,k,l,m,n,t;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k>>m;
        v1.push_back(k);
        v2.push_back(m);
    }
    int mn=10000;
    v3=v2;
    //sort(v3.begin(),v3.end());
    //l=v3[0];
    for(i=0;i<v2.size();i++){
        if(v2[i]<mn){
            mn=v2[i];
        }
        else
            v2[i]=mn;
    }
    int sum=0;
    for(i=0;i<v2.size();i++){
        sum+=v1[i]*v2[i];
    }
    cout<<sum<<endl;
}
