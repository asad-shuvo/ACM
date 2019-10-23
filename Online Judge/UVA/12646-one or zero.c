#include <stdio.h>
int main()
{
    int A,B,C;
    while(scanf("%d%d%d",&A,&B,&C)!=EOF)
    {
    if(A==1 && B==1 && C==0)
        printf("C\n");
        else if(A==1 && C==1 && B==0)
        printf("B\n");
        else if(B==1 && C==1 && A==0)
        printf("A\n");
        else if(B==1 && C==1 && A==1)
        printf("*\n");
        else if(B==1 && C==0 && A==0)
        printf("B\n");
        else if(B==0 && C==0 && A==1)
        printf("A\n");
         else if(B==0 && C==1 && A==0)
        printf("C\n");
        else if(B==0 && C==0 && A==0)
        printf("*\n");
    }

}
