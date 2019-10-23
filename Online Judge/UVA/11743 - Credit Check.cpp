#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    int a,b,c,d,i,k,j,l,m,sum1,sum2,arr[100],ar[100],rem1,rem2,test,rem3,ans;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    k=0;
    j=0;
    sum1=0;
    sum2=0;
    while(a>0){
        rem1=(a%10);
        arr[k++]=rem1;
        a=a/10;
        rem2=a%10;
        rem2=2*rem2;
        ar[j++]=rem2;
        a=a/10;
    }
     while(b>0){
        rem1=(b%10);
        arr[k++]=rem1;
        b=b/10;
        rem2=b%10;
        rem2=rem2*2;
        ar[j++]=rem2;
        b=b/10;
    }
    while(c>0){
        rem1=(c%10);

        arr[k++]=rem1;
        c=c/10;
        rem2=c%10;
        rem2=rem2*2;
        ar[j++]=rem2;
        c=c/10;
    }
    while(d>0){
        rem1=(d%10);
        arr[k++]=rem1;
        d=d/10;
        rem2=d%10;
        rem2=rem2*2;
        ar[j++]=rem2;
        d=d/10;
    }
    for(i=0;i<k;i++){
            sum1=sum1+arr[i];
        //printf("%d ",ar[i]);
    }
   for(i=0;i<j;i++){
    sum2=sum2+ar[i]%10;
    ar[i]=ar[i]/10;
    sum2=sum2+ar[i]%10;
   }
   //printf("%d \n",sum2);
  //printf("%d \n",sum1);
   ans =sum1+sum2;
    rem3=ans%10;
   if(rem3==0)
    printf("Valid\n");
   else
    printf("Invalid\n");
}
return 0;
}
