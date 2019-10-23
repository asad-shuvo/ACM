#include <stdio.h>
int main()
{
    int rev,n,r,add,k;
    rev=0;
    scanf("%d",&n);
    //n=k;
    while(n){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d\n",rev);
    add=n+rev;
    printf("%d",add);

}
