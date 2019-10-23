#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int main()
{
    int i,j,k,l,m,n,test;
    scanf("%d",&test);
    while(test--){
    int arr[mx];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=n-1;i>=1;i--){
        for(j=i-1;j>=0;j--){
            if(arr[i]>=arr[j]){
                sum++;
            }
        }
    }
    printf("%d\n",sum);
}
}
