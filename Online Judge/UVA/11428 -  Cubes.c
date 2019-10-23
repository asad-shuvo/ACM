#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,cube,cube1,cube2,f,flag;
    while(scanf("%d",&n)==1){
            flag=0;
          if(n==0)
            break;
            if(n==1)
                flag=0;
    for(i=1;i<=n;i++){
        for(j=0;j<=i;j++){
            cube=cube1-cube2;
            if((i*i*i-j*j*j)==n){
                flag=1;
                break;
            }
        }
                if(flag==1)
                    break;
    }
    if(flag==1)
        printf("%d %d\n",i,j);
    else
        printf("No solution\n");
}
return 0;
}

