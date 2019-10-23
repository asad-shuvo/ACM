#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,rem,s,s1,h,h1,l,l1,k,k1;
    scanf("%lld",&n);
    if(n<100)
    {
        printf("%lld\n",n);
    }
    else if(n>=100 && n<1000)
    {
        rem=n%100;
        s=n/100;
        printf("");
    }
    else if(n>=1000 && n<100000)
    {
        rem=n%100;
        s=n/100;
        r1=s%100;
        h=r1/1000;
        printf("");
    }
     else if(n>=100000 && n<10000000)
    {
        rem=n%100;
         r1=s%100;
        h=r1/1000;
        r2=h%1000;
        l=r2/100000;
        printf("");
    }
    else if(n>=10000000 && n<1000000000)
    {
         rem=n%100;
         r1=s%100;
        h=r1/1000;
        r2=h%1000;
        l=r2/100000;
        r3=l%100000;
        k=r3/10000000;,
    }
    else if(n>=1000000000 && n<100000000000)
    {
         rem=n%100;
        s=n/100;
        h=s/1000;
        l=h/100000;
        k=n/10000000;
        s1=k/100;
    }
     else if(n>100000000000 && n<10000000000000)
    {
         rem=n%100;
        s=n/100;
        h=s/1000;
        l=h/100000;
        k=n/10000000;
        s1=k/100;
        h1=s1
    }
}
