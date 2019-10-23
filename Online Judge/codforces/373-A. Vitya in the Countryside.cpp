#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n;
    scanf("%d",&n);
    int arr[1000];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n==1 && arr[0]==15)
        cout<<"DOWN"<<endl;
    else if(n==1 && arr[0]==0)
        cout<<"UP"<<endl;
    else if(n==1 && arr[0]!=15 && arr[0]!=0)
        cout<<"-1"<<endl;
    else if(arr[n-1]==15)
        cout<<"DOWN"<<endl;
    else if(arr[n-1]==0)
        cout<<"UP"<<endl;
    else if(arr[n-1]>arr[n-2] && arr[n-1]!=15)
        cout<<"UP"<<endl;
    else if(arr[n-1]<arr[n-2] && arr[n-1]!=0)
        cout<<"DOWN"<<endl;
}
