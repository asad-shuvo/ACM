#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int i=0,a,b,rev,rem,n,test;
   scanf("%lld",&test);
   while(test--){
        i++;
   rev=0;
   scanf("%lld",&a);
   n=a;
   while(a>0){
    rem=a%10;
    rev=rev*10+rem;
    a/=10;
   }
   if(rev==n)
    printf("Case %lld: Yes\n",i);
   else
    printf("Case %lld: No\n",i);
}
return 0;
}
