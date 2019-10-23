#include <stdio.h>
#include <math.h>
int main()
{
    freopen("input.txt","rt",stdin);
    int chack,a,i,p=2,j,m,n,k,prime[1000],temp,l,t,x;
    while(scanf("%d",&n)){
        if(n==0)
        break;
            k=0;
    x=n;
    if(n<0)
        n=n*-1;
    //x=n;
    printf("%d = ",n);
    while(n%2==0)
    {
        prime[k++]=2;
        n=n/2;
    }
    for(j=3;j<=sqrt(n);j=j+2){
            while(n%j==0){
                    prime[k++]=j;
        n=n/j;
            }
    }
    if(n>2)
    {
        prime[k++]=n;
    }
    if(x<0)
    {
        printf("-1 x ");
        if(k==1)
            printf("%d\n",prime[0]);
        else{
                printf("%d ",prime[0]);
    for(i=1;i<k;i++)
    {

        printf("x %d ",prime[i]);

    }
    printf("\n");
        }

    }
    else{
    if(k==1){
    printf("%d\n",prime[0]);
    }
    else{
            printf("%d ",prime[0]);
    for(i=1;i<k;i++)
    {

        printf("x %d ",prime[i]);

    }
    printf("\n");
    }
    }
    }

return 0;
}




