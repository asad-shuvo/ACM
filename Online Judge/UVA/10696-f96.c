#include <stdio.h>
int main()
{
    long int k,n;
   while(scanf("%ld",&n)!=EOF)
   {
       if(n==0)
        break;
    if(n>=101)
        printf("f91(%ld) = %ld\n",n,n-10);
     else
    printf("f91(%ld) = 91\n",n);
}
 return 0;
}
