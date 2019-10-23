#include <bits/stdc++.h>
using namespace std;
int main()
{
  freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
    double n,avg,sum;
    int i,te=0,k,l,test;
    cin>>test;
    while(test--){
            te++;
            sum=0;

    for(i=1;i<=12;i++){
        scanf("%lf",&n);
        sum+=n;
    }
    avg=sum/12;
    if(avg<1000){
        printf("%d $%.2lf\n",te,avg);
    }

    else if(avg>=1000){
    //cout<<avg;
    int t=avg;
    int t2=t%1000;
    //cout<<t<<endl;
    double a=avg-t;
    a=a+t2;
    //cout<<a<<endl;
    int t1=t/1000;

    //cout<<t2<<endl;
    //cout<<a;
    printf("%d $%d,%.2lf\n",te,t1,a);
 }
    }

    return 0;
}
