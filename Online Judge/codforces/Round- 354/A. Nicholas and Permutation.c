#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,max,min,d1,d2,d3,d4,mx,mn,b,arr[105];
    while(scanf("%d",&n)==1){
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
            mx=i+1;
        }
    }
    min=10000000;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min){
            min=arr[i];
            mn=i+1;
        }
    }
    //printf("mx= %d\n mn= %d",mx,mn);
    if(mn==1 && mx==n)
    {
        printf("%d\n",(n-1));
    }
    else
    {
    d1=mn-1;
    d2=n-mn;
    d3=mx-1;
    d4=n-mx;
    if(d1>d2 && d1>d3 && d1>d4){
         printf("%d\n",d1);
    }
    else if(d2>d1 && d2>d3 && d2>d4){
    //b=d2;
     printf("%d\n",d2);
    }
        else if(d3>d1 && d3>d2 && d3>d4){
        //b=d3;
         printf("%d\n",d3);
        }
    else if(d4>d1 && d4>d2 && d4>d3){
       // b=d4;
         printf("%d\n",d4);
    }
    //printf("%d\n",b);
}
}
}

