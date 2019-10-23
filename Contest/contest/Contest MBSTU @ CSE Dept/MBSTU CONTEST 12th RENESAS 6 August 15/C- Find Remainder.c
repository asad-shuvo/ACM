#include <stdio.h>
int main()
{
    int a,b,n,i,sum,div;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        div=a/b;
        sum=a-(b*div);
        printf("%d\n",sum);
    }
    return 0;
}
