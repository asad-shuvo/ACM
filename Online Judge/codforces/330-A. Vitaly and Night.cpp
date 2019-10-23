#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,t,mid,arr[1000];
    cin>>n>>m;
    m=m*2;
    mid=m/2;
    int sum=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
                //scanf("%d%d",&k1,&k2);
     //   if(k1==1 || k2)
            scanf("%d",&arr[j]);
        }
        for(l=1,t=l+1;l<=m,t<=m;l+=2,t+=2){
            if(arr[t]==1 || arr[l]==1)
            {
                sum++;
            }
        }
    }
    cout<<sum<<endl;
}
