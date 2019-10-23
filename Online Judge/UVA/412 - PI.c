#include<stdio.h>
#include <math.h>
int main()
{
    int n,i,j,k=0,l,m,gcd,t,a,b;
    int arr[1000];
    double ratio;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
             while(arr[j]!=0){
        t=arr[j];
        arr[j]=arr[j]%arr[i];
        arr[i]=t;
    }
    gcd=arr[i];

        }
        if(gcd==1)
            k++;
    }
    printf("%d",k);
}
