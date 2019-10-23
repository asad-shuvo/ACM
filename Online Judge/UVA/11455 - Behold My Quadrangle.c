#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
   scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    if(m1==m2 && m2==m3 && m3==m4)
        printf("square\n");
        else if(m1==m2 && m3==m4)
            printf("rectangle\n");
            else if(m2==m3 && m1==m4)
            printf("rectangle\n");
            else if(m2==m4 && m1==m3)
            printf("rectangle\n");
            else if(m1+m2+m3>m4 && m1+m2+m4>m3 && m2+m3+m4>m1 && m1+m3+m4>m2 )
                printf("quadrangle\n");
            else
                printf("banana\n");
}
return 0;
}
