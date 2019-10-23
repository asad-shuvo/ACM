#include <stdio.h>
int main()
{
  unsigned long long n;
    while(scanf("%llu",&n)!=EOF){
    if(n%4==0 && n%100!=0 && n%15==0)
    {
        printf("This is leap year.\n");
        printf("This is huluculu festival year.\n");
    }
    else if(n%400==0 && n%15==0)
    {
        printf("This is leap year.\n");
        printf("This is huluculu festival year.\n");
    }
   else if(n%4==0 && n%100!=0 && n%55==0)
    {
        printf("This is leap year.\n");
        printf("This is bulukulu festival year.\n");
    }
  else  if(n%400==0 && n%55==0)
    {
        printf("This is leap year.\n");
         printf("This is bulukulu festival year.\n");
    }
   else if(n%4==0 && n%100!=0)
    {
        printf("This is leap year.\n");
    }
    else if(n%400==0)
    {
        printf("This is leap year.\n");
    }
    else if(n%15==0)
    {
        printf("This is huluculu festival year.\n");
    }

    else printf("this is an ordinary year.\n");

}
return 0;
}
