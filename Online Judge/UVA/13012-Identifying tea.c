#include <stdio.h>
int main()
{
    int i,j,k,l,m,t,count;
    int arr[5];
        while(scanf("%d",&t)!=EOF)
        {
        count=0;
        for(i=0; i<5; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==t)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
