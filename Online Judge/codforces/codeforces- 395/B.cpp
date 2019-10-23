#include <bits/stdc++.h>
using namespace std;
long long int arr[2000005];
int main()
{
    long long int n;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
    }
for(int i=1;i<=(n-i+1);i++){
    if(i%2==1)
        swap(arr[i],arr[n-i+1]);
}
printf("%lld",arr[1]);
for(int i=2;i<=n;i++)
    printf(" %lld",arr[i]);

    printf("\n");
}
