#include <bits/stdc++.h>
using namespace std;
 int arr[100000];
int main()
{
    int n,i,j,k,l,m,row,col,dia;

    cin>>n;
    k=n*n;
int     p;
    int sum,sum1,sum2,k1,k2,k3,sum3,place;
    int arr1[10000],arr2[10000],arr3[10000],des;
    for(i=0;i<k;i++){
           // p++;
        scanf("%d",&arr[i]);
    }
    for(i=0;i<k;i++)
        arr1[i]=0,arr2[i]=0,arr3[i]=0;
   // j=0;
    for(int z=1;z<=1;z++){
            des=z;
            for(i=0;i<k;i++){
            if(arr[i]==0){
            arr[i]=z;
    break;
            }}
        sum=0,sum1=0,sum2=0,k1=0,k2=0,k3=0,sum3=0,p=0;
    for(i=0;i<k;i++){
            p++;
            //if(arr[i]==0)
            //arr[i]=j;
    sum+=arr[i];
    if(p==3){
        arr1[k1++]=sum;
        sum=0;
    p=0;
    }
    }
    for(i=0;i<k1;i++)
        //cout<<arr1[i]<<" ";
        for(i=0;i<n;i++){
        for(j=i;j<k;j=j+n){
            sum1+=arr[j];
        }
        arr2[k2++]=sum1;
        sum1=0;
    }
    for(i=0;i<k;i=i+n+1){
        sum2+=arr[i];
    }

//cout<<arr[n-1]<<" "<<arr[n-1+2]<<" "<<arr[n-1+2+2];
int t=0;
    for(i=n-1;i<k;i+=n-1){
            t++;
    if(t>n)
        break;
        sum3+=arr[i];
        //cout<<sum3;
    }
    int f1=0,f2=0,f3=0;
    for(i=0;i<k1;i++){
        if(arr1[0]!=arr1[i]){
            f1=1;
           // break;
        }
    }
    for(i=0;i<k2;i++){
        if(arr2[0]!=arr2[i])
        {
            f2=1;
           // break;
        }
    }
    if(sum2!=sum3){
        f3=1;
    }
    cout<<arr1[0]<<" "<<arr2[0]<<endl;
   // cout<<z<<endl;
    cout<<f1<<" "<<f2<<" "<<f3<<endl;
    if(f1==0 && f2==0 && f3==0){

        if(arr1[0]==arr2[0] && arr1[0]==sum2){
                cout<<z;
            //place=j;
        }
    }
    //cout<<arr1[0]<<" "<<arr2[0]<<" "<<sum3;
}
//cout<<place;
}
