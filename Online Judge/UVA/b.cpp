#include <bits/stdc++.h>
using namespace std;
#define ll  int
int main()
{
    ll i,j,k,l,n,m;
    ll arr1[100005],arr2[100005],arr[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ll q,t=0,sum;
    scanf("%d",&q);
    for(i=0;i<q;i++){
    scanf("%d",&m);
        sum=0;
         start=0;
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]>=m){
            found=1;
            break;}
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
    }
        printf("%d\n",sum);
        //arr1[t++]=sum;
    }
   // for(i=0;i<t;i++){
     //       printf("%d\n",arr1[i]);
        //cout<<arr1[i]<<endl;
    //}
}
