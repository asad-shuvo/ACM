#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    int i,j,k,l,m,n,a,f,test;
    scanf("%d",&test);
    for(k=0;k<test;k++)
    {
    scanf("%d%d",&a,&f);
    for(m=0;m<f;m++){
    for(i=0;i<a;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("%d",i+1);
        }
        printf("\n");
    }
    for(i=a-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    if(m!=f-1 || k!=test-1)
    printf("\n");
}
    }
}
