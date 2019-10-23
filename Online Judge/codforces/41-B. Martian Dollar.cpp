#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,arr[2005],i,j,k,l;
    vector<int>v;
    scanf("%d%d",&n,&b);
    int sum=0,f=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        int mx=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
               if(arr[j]>mx)
                    mx=arr[j];
        }
        }
        if(mx>0){
            f=1;
            int p=(b/arr[i]);
            int p1=(b%arr[i]);
            sum+=(p*mx)+p1;
            v.push_back(sum);
            sum=0;
            mx=0;
        }
    }
    if(f==0)
        cout<<b<<endl;
        else{
    sort(v.begin(),v.end());
    int ans=v.size();
    cout<<v[ans-1]<<endl;
        }
    //cout<<sum<<endl;
}
