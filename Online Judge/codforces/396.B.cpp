#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100005];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int f=0;
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            if(arr[i+2]<arr[i]+arr[i+1])
            {
                f=1;
                break;
            }
        }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");


}
