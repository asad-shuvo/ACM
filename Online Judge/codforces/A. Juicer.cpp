#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,d,sum,k,l,m,a,c,i,j;
    int arr[100000];
    scanf("%d%d%d",&n,&b,&d);
    sum=0;
    int cnt=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<=b){
            sum+=arr[i];
        }
        if(sum>d)
        {
            cnt++;
            sum=0;
        }
    }
    printf("%d\n",cnt);
}
