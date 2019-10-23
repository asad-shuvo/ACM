#include<stdio.h>
int main()
{
    int a;
    int *p;
    p=&a;
    a=5;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
 printf("%d\n",a);
    *p=12;
    printf("%d\n",a);

    int b=20;
    *p=b;
     printf("%d\n",p);///Address remain same
     printf("%d\n",*p);///Only the value will change
///smart way
int d=10;
int *p1=&d;
int* p2=&d;///It will also work

///Pointer Arithmetic
printf("%d\n",p);///p is 2002 (let)
printf("Size of integer %d\n",sizeof(int));
printf("%d\n",p+1);///p+1 will be 2006
}
