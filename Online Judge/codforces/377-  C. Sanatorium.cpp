#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long
int main()
{
    llu arr[5],k;
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    k=arr[2]-1;
    llu s=0;
    if(k>=arr[0])
    {
        s+=(k-arr[0]);
    }
    if(k>=arr[1])
        s+=(k-arr[1]);
        cout<<s<<endl;
        //cout<<sum<<endl;
}
