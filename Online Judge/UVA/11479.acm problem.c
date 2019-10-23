#include <stdio.h>
int main()
{
    long int a,b,c,t,i;
    scanf("%d",&t);
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        if(a+b<c || a+c<b || b+c<a)
            printf("Invalid");
        else if(a==b && b==c)
            printf("Equilateral");
        else if(a==b || b==c)
            printf("Isosceles");
        else
            printf("scalene");
    }
}

