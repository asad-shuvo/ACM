#include <stdio.h>
int main()
{
    int n,arr[1005],i,j,temp,l;
    while(scanf("%d",&n)!=EOF){
            l=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j]) && (j>=0))
        {
          arr[j+1]=arr[j];
          j=j-1;
          l++;
        }
        arr[j+1]=temp;
    }
    printf("Minimum exchange operations : %d\n",l);
    }
}

