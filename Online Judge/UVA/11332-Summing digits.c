#include <stdio.h>
int main()
{
  int i,j,k,l,m,r,num,reverse,sum;
   reverse=0;
   sum=0;
    scanf("%d",&num);
    while(num){
        r=num%10;
        reverse=reverse*10+r;
        num=num/10;
          sum=sum+r;
        if(sum>9)
        {
           while(num){
        r=num%10;
        reverse=reverse*10+r;
        num=num/10;
          sum=sum+r;
          printf("%d\n",sum);
        }
        }
        ///printf("%d\n",sum);

    }
    printf("%d",sum);
}
