#include<stdio.h>
int main()
{
    int i,j,sum,total,count;

    while((scanf("%d", &total))==1)
    {
        sum =0;
        count = 0;
        for(j=1; j<=100000; j++)
        {
            for(i =1; i<=j; i++)
            {
                sum=sum+i;
            }
            count++;
            if(total<sum)
            {
                break;
            }

        }
        printf("%d\n", count-1);
    }
    return 0;
}
