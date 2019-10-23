#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,arr[10000],a[1000],ai[10000],aj[10000];
    k=0;
int    p=0;
int z=0;
int y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        a[k++]=arr[i];
    }
    sort(arr,arr+n);
    int s=arr[0]+arr[n-1];
    for(i=0,j=n-1;i<n/2;i++,j--){
        ai[z++]=arr[i];
        aj[y++]=arr[j];
    }
    int u[10000],h=0;
    set<int>se;
    for(i=0;i<z;i++){
        for(j=0;j<n;j++){
            if(ai[i]==a[j])
            {
               // u[h++]=j+1;
               se.insert(j+1);
            }
        }
    }
    set<int>::iterator it;
    for(it=se.begin();it!=se.end();it++){
        cout<<*it<<endl;
    }
    //for(i=0;i<h;i++){
       // printf("%d ",u[i]);
   // }
    /*
   int mn=arr[0];
   for(i=0;i<n;i++){
    if(mn>arr[i]){
        mn=arr[i];
    }
   }
   int mx=arr[0];
   for(i=0;i<n;i++){
    if(mx<arr[i]){
        mx=arr[i];
    }
   }
   int s=mx+mn;
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]+arr[j]==s){
                if(arr[i]<=arr[j]){
            a[k++]=i+1;
            ar[p++]=j+1;
            j=j+2;
            break;
                }
                else{
                    a[k++]=j+1;
                    ar[p++]=i+1;
                    break;
                }
        }
       // break;
    }
   }
   for(i=0;i<k;i++){
    printf("%d %d\n",a[i],ar[i]);
   }
  // printf("%d %d",mn,mx);
  */
}
