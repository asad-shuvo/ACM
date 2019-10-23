#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[200];
    int n,k;
    scanf("%d%d",&n,&k);
    int mx=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>mx)
            mx=arr[i];
    }
    if(mx>k)
        cout<<mx-k<<endl;
    else
        cout<<"0"<<endl;
}
