#include <stdio.h>
int main()
{
 long long int n,count,i;
    while((scanf("%lld",&n))==1 && n>=0){
    count=1;
    for(i=1;i<=n;i++)
 {
        count=count+i;
 }
    printf("%lld\n",count);
 }
 return 0;
}
