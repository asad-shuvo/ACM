#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    int arr[10000];
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    int f1,f2,f3,f=0,ar[100],c=0;
    for(i=n-1;i>=0;i--){
        for(j=n-1;j>=0;j--){
                if(i!=j)
            k=arr[i]-arr[j];
            for(m=0;m<n;m++){
                if(j!=m){
                if(arr[m]==k){
                        f=1;
                    f1=arr[i];
                    f2=arr[j];
                    f3=arr[m];
               // ar[c++]=f1;
                //ar[c++]=f2;
                //ar[c++]=f3;
                }
            }
        }
    }
    }
    if(f==1)
    {
        sort(ar,ar+c);
      /*  for(i=c-1;i>=0;i--)
            cout<<ar[i];
            cout<<endl;*/
            cout<<f1<<" ";
            if(f2>f3)
                cout<<f2<<" "<<f3<<endl;
            else
                cout<<f3<<" "<<f2<<endl;
    }
    else
        cout<<"-1"<<endl;
    //cout<<f1<<" "<<f2<<" "<<f3;
}
