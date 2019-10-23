#include <stdio.h>
int main()
{
    int n,t,n1;
    scanf("%d\n",&t);
    while((scanf("%d%d",&n,&n1))==2)
    {
       if(n<n1)
            printf("<\n");
       else if(n>n1)
        printf(">\n");
       else
        printf("=\n");
    }
}
