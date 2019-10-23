#include <stdio.h>
int main()
{
    int arr[20],mid,n,j=1,i,t;
    scanf("%d",&t);
    while(t>0){
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l=0,u=n-1,k;
    if(n%2!=0){
    mid=((l+u)/2);
    k=arr[mid];
    }
    else
    {
        mid=((l+u)/2)+1;
         k=arr[mid];
    }
    printf("Case %d: %d\n",j,k);
    t--;
    j++;
}
return 0;
}
