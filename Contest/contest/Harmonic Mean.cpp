#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int arr[10000000],arr1[10000000];
int Gcd(ll  a,ll b){
    ll t,GCD;
                while(b!=0){
               t=b;
               b=a%b;
               a=t;
            }
            GCD=a;
            return GCD;
}
int main()
{
    ll N,S,GCD,LCM,i,j,k,l,m,n,test,t,te=0;
    cin>>test;
    while(test--){
    scanf("%lld",&S);
    for(i=0;i<S;i++){
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<S;i++)
        arr1[i]=arr[i];
    //int GCD,L;
/*
    int a=arr[0];
    int b=arr[1];
    while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        int GCD=a;
        int LCM=arr[0]*arr[1]/GCD;
        arr[1]=LCM;
        //cout<<arr[1];*/
         t=0;
    for(i=0;i<S;i++){
    if(i==S-1)
        break;
            ll p=arr[i];
  //          cout<<p<<endl;
            ll q=arr[i+1];
    //        cout<<q<<endl;
            ll a=p;
            ll b=q;
            while(b!=0){
               t=b;
               b=a%b;
               a=t;
            }
            GCD=a;
//cout<<GCD<<endl;
          LCM=p*q/GCD;
      //    cout<<LCM<<endl;
            arr[i+1]=LCM;
      //      if(i==S-1)
        //        break;
    }
   // cout<<LCM<<endl;
    ll sum=0;
    for(i=0;i<S;i++){
        sum=sum+LCM/arr1[i];
        //cout<<sum<<endl;
    }
        ll sum1=LCM*S;
        int s1=sum1;
        int s=sum;
    int G=Gcd(s1,s);
    sum1=sum1/G;
    sum=sum/G;
    printf("Case %lld: %lld/%lld\n",++te,sum1,sum);
}
return 0;
}

