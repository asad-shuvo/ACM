#include <stdio.h>
int main()
{
    int n,temp;
    while(scanf("%d",&n)==1){
            if(n==0)
            break;
    temp=n;
    while(n>=3)
    {
        temp=temp+(n/3);
        n=(n/3)+(n%3);
    }
        if(n==2)
        {
            temp++;
        }
    printf("%d\n",temp);
}
return 0;
}
