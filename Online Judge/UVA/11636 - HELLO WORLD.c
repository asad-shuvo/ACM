#include <stdio.h>
int main()
{
    freopen("input.txt","rt",stdin);
    int i,j=1,k,l,n,sum;
    while(scanf("%d",&n)==1){
            sum=1;
            l=1;
            if(n<=0)
            break;
            if(n==1)
            {
                printf("Case %d: 0\n",j);
            }
            else{
    for(i=1;i<=n;i++)
    {
        sum=sum*2;
       // printf("%d\n\n",sum);
        if(sum>=n)
            break;
        l++;
    }
    printf("Case %d: %d\n",j,l);
            }
    j++;
    }
    return 0;
}
