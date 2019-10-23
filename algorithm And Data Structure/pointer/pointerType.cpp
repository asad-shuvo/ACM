#include<stdio.h>
int main()
{

    int a;
    int *p;
    p=&a;
    a=5;
    char *p0;
    p0=(char*)p;///Typecasting
    printf("Size of the %d bytes\n",sizeof(char));
    printf("Address = %d, value=%d\n",p0,*p0);
    printf("Address = %d, value=%d\n",p0+1,*(p0+1));

///Generic pointer
void *pv;
pv=p;
printf("Address Void pointer = %d\n",pv);
}
