#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,w,arr[100005],sum,test;
    scanf("%d",&test);
    while(test--){
            sum=0;
            k=0;
    scanf("%d",&m);
    scanf("%d",&w);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+m);
    for(i=0;i<m;i++)
    {
        k++;
        sum=sum+arr[i];
        if(sum>w)
            break;
    }
        if(i==m){
            printf("%d\n",k);
        }
        else
            printf("%d\n",k-1);
    }
    return 0;

}
