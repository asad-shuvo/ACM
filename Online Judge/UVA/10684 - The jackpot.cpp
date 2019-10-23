#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("ioutput.txt","w",stdout);
    int arr[10000],n,m,i,j,k,l,sum,a[10000];
    while(scanf("%d",&n)!=EOF && n>0){
    k=0;
    sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        //if(arr[i]>0){
            sum+=arr[i];
        }
        //else if(arr[i]<0){
          //  a[k++]=sum;
          //  sum=0;
       // }
       cout<<sum<<endl;

    }
    /*
    a[k++]=sum;
    int m=a[0];
    for(i=0;i<k;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    if(m==0){
        printf("Losing streak.\n");
    }
    else
        printf("The maximum winning streak is %d.\n",m);
    }
    */
}
