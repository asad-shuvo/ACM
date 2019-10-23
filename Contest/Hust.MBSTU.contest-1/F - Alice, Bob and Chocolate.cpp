#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,sum1,sum2,arr[100005],a,b,t,s,z;
    while(scanf("%d",&n)!=EOF){
    sum1=0;
    sum2=0;
    a=0;
    b=0;
    t=0;
    s=0;
    z=2;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==2)
            printf("1 1\n");
            else{
    //printf("%d ",arr[n-1]);
   sum1=sum1+arr[0];
   sum2=sum2+arr[n-1];
    for(i=1;i<n;i++){
            z++;
        if(sum1<sum2){
                t++;
            sum1=sum1+arr[0+t];
            a++;
        }
        else if(sum2<sum1){
            s++;
            sum2=sum2+arr[n-1-s];
            b++;
        }
        else if(sum1==sum2 && z==n){
                t++;
            sum1=sum1+arr[0+t];
            a++;
        }
        else if(sum1==sum2 && z!=n){
                z++;
                t++;
        s++;
            sum1=sum1+arr[0+t];
            sum2=sum2+arr[n-1-s];
            a++;
            b++;
        }
    if(z==n)
        break;
    }
    printf("%d %d\n",a+1,b+1);
    }
    }
    return 0;
}
