#include<bits/stdc++.h>
using namespace std;
long long int prime(int a){
  int p,q,r;
  if(a==1)
    return 0;
  if(a==2)
    return 1;
  if(a%2==0)
    return 0;
  else
  {
      for(p=3;p<=sqrt(a);p++)
      {
          if(a%p==0)
            return 0;
      }
  }
  return 1;
}
int main()
{
    //freopen("input.txt","rt",stdin);
    long long int n,i,j,k,l,m,rem,rev;
    while(scanf("%lld",&n)!=EOF){
            rev=0;
    k=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(prime(k)==1 && k==rev)
    {
         printf("%lld is prime.\n",k);
    }
   else  if(prime(k)==1 && prime(rev)==1)
    {
        printf("%lld is emirp.\n",k);
    }
    else if(prime(k)==1 && prime(rev)==0)
    {
        printf("%lld is prime.\n",k);
    }
    else
        printf("%lld is not prime.\n",k);
    }
    return 0;
}
