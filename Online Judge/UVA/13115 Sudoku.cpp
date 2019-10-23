#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v[1000],v1[10000],v2;
    int i,j,k,l,m,n,arr[10000],p=0;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&k);
            arr[p++]=k;
            v[i].push_back(k);
        }
    }
    for(i=0;i<n;i++){
            for(j=i;j<p;j=j+n){
     v1[i].push_back(arr[j]);
            }
    }
    int f=0,f1=0;
    for(i=0;i<n;i++){
        for(j=0;j<v[i].size();j++){
           for(k=j+1;k<v[i].size();k++){
            if(v[i][j]==v[j][k])
                f=1;
           }
        }
       // cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<v1[i].size();j++){
           for(k=j+1;k<v1[i].size();k++){
            if(v1[i][j]==v1[j][k])
                f1=1;
           }
        }
       // cout<<endl;
    }
    if(f==1 || f1==1)
        cout<<"NO"<<endl;
        else if(f==0 && f1==0)
     cout<<"YES"<<endl;
}
