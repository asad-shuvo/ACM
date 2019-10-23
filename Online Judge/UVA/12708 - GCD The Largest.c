#include <stdio.h>
int main()
{
    long long int i,t,j,a,b,n,gcd,max,test;
    scanf("%lld",&test);
    while(test--){
    scanf("%lld",&n);
  if(n%2!=0)
  {
      n--;
  }
  printf("%lld\n",n/2);
    }
    return 0;
}
