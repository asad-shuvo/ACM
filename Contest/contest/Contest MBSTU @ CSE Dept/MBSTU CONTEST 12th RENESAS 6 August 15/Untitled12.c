#include<stdio.h>
int main()
{
    int i,j,sum,total,count;

    while((scanf("%d", &total))==1)
    {
        j=0;
        sum =0;
        count = 0;
        while(total>=sum)
        {
            j++;
            for(i =1; i<=j; i++)
            {
                sum=sum+i;
            }
            count++;
        }
        printf("%d\n", count-1);
    }
    return 0;
}
