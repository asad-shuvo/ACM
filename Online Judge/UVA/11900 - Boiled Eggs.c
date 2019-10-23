#include <stdio.h>
int main()
{
    freopen("boiled.txt","rt",stdin);
    int p,n,q,k,i,arr[100],sum,test,j=1;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d%d",&n,&p,&q);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=0;
    sum=0;
    for(i=0;i<n && i<p ;i++)
    {
        sum=sum+arr[i];
        if(sum> q)
            break;
        k++;
    }
    printf("Case %d: %d\n",j,k);
    j++;
    }
return 0;
}
