#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,l,m,n,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d,",&n);
    if(n==2 || n==3 || n==5 || n==7 || n==13 || n==17)
        printf("Yes\n");
    else
        printf("No\n");
}
}
