#include <stdio.h>
int main()
{
    int n,temp,v;
    while(scanf("%d",&n)==1){
        v=0;
            if(n==0)
            break;
    temp=n;
    while(n>=3)
    {
        v=v+(n/3);
       n=(n/3)+(n%3);
    }
        if(n==2)
        {
           v++;
        }
    printf("%d\n",v);
}
return 0;
}

