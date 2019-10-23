#include <stdio.h>
#include <math.h>
int main()
{
    double d,u,v,p,t,s;
    int test,i=1;
    scanf("%d",&test);
    while(test>0){
            scanf("%lf%lf%lf",&d,&u,&v);
           if(u>=v){
            printf("Case %d: can't determine\n",i);
        }
    else{
    t=(d/v);
    p=d/(sqrt(v*v-u*u));
   s=p-t;
     if(s==0)
   {
       printf("Case %d: can't determine\n",i);
    }
   else{
        if(s<0)
        {
            printf("Case %d: %.3lf\n",i,(s*-1));
        }
        else{
    printf("Case %d: %.3lf\n",i,s);
        }
    }
  }
   i++;
test--;
    }
}
