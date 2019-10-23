#include <stdio.h>
int main()
{
    int i,j,k,test,a;
    scanf("%d",&test);
    for(a=1;a<=test;a++){
    scanf("%d%d%d",&i,&j,&k);
    if((i+j)<=k || (i+k)<=j || (j+k)<=i)
        printf("Wrong!!");
    else
        printf("OK");
}
return 0;
}
