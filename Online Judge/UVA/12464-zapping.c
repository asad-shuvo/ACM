#include<stdio.h>
int main()
{
    int i,j,k,l,t;
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        if(i<0 || j<0)
        {
            break;
        }
    if(j>i)
    {
        t=j;
        j=i;
        i=t;
    }
     k=i-j;
    if(k>50)
    {

        k=(100-i)+j;
    }

    printf("%d\n",k);
}
}
