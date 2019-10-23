#include<stdio.h>
int main()
{
    int A[5]={1,2,3,4,5};
    printf("%d\n",A);
    for(int i=0;i<5;i++){
        printf("Address of i %d\n",A+i);
        printf("Value of i %d\n",*(A+i));
    }
}
