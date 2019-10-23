#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,sq,i,count=0;
    while(scanf("%d%d",&n,&m)){
            count=0;
            if(n==0 && m==0)
            break;
    for(i=n;i<=m;i++)
    {
        sq=pow(i,.5);
        if(sq*sq==i){
            count++;
    }
    }
    printf("%d\n",count);
    }
    return 0;
}
