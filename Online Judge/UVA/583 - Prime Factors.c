#include <stdio.h>
int main()
{
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
    while(p<=n){
    for(j=2;j<=n;j++){
    chack=1;
    if(j==1)
        chack=0;
    for(i=2;i<j;i++){
        if(j%i==0)
            chack=0;
    }
    if(chack==1){
            if(n%j==0){
                    prime[k++]=j;
//printf("%d \n",j);
       // j=j+1;
        n=n/j;
            }
            //n=n/j;
    }
    //n=n/j;
    //j++;
    }

    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(prime[i]>prime[j])
            {
                temp=prime[i];
                prime[i]=prime[j];
                prime[j]=temp;
            }
        }
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


