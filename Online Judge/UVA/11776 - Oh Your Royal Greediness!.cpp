#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m,o,p;
    cin>>n;
    int arr[10000],arr1[10000];
    for(i=0;i<n;i++)
        cin>>arr[i]>>arr1[i];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                    swap(arr1[i],arr1[j]);
                }
            }
        }
       while(1){

       }
}
