#include <bits/stdc++.h>
using namespace std;
int fact(int a){
    int i,j,k;
    int f=1;
    for(i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int sum,n,i,j,l,m,t;
    scanf("%d",&n);
    int arr[100],k=0;
   int mx=100000;
    for(i=1;i<=5;i++){
        t=1;
            sum=0;
            sum+=fact(i);
        for(j=1;j<=5;j++){
                //if(sum==n)
                //break;
    if(j!=i){
            sum+=fact(j);
            t++;
            if(sum==n){
                arr[k++]=t;
                break;

            }
        }
    }
    }
    for(i=0;i<k;i++)
        cout<<arr[i];
   // cout<<mx;
}
