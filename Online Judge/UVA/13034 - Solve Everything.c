#include <stdio.h>
int main()
{
    int arr[100],i,n=13,t,found=1,j=1;
    scanf("%d",&t);
    while(t>0){
            found=1;
    for(i=0;i<13;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<13;i++)
    {
        if(arr[i]==0)
            found=0;
    }
    if(found==0)
        printf("Set #%d: No\n",j);
    else
        printf("Set #%d: Yes\n",j);
        t--;
    j++;
    }
}
