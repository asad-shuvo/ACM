#include <stdio.h>
int main()
{
    int arr[20];
    int i,j,k,l,m,n,chak;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
         for(i=0;i<10;i++){
        if(arr[i]>arr[i+1])
        {
            chak=1;
        }
         }
          for(i=9;i>=0;i--){
                chak=0;
    if(arr[i]>arr[i-1])
        {
          chak=1;
        }
          }
}
if(chak==1)
{
    printf("order");
}
else
    printf("disorder");
}
