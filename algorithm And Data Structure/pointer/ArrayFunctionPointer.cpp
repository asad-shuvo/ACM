#include<stdio.h>
int s(int *A,int sz)
{
    int sum=0;
    for(int i=0;i<sz;i++){
        sum+=A[i];
    }
    return sum;
}
int main()
{

    int A[]={1,2,3,4,5};
    int Sz=sizeof(A)/sizeof(A[0]);
    int sum=s(A,Sz);
    printf("%d\n",sum);
}
