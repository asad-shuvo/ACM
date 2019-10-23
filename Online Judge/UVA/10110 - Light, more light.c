#include <stdio.h>
int main()
{
    long long int n,i,j,flag;
    while(scanf("%lld",&n)==1 && n>0){
            flag=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            flag++;
    }
    if(flag%2==0)
    {
        printf("no\n");
    }
    else
        printf("yes\n");
}
return 0;
}
