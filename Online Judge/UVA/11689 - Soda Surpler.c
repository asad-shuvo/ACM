#include <stdio.h>
int main()
{
    int e,f,g,add,temp,v=0,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d%d",&e,&f,&g);
            v=0;
    add=e+f;
    while(add>=g)
    {
      v=v+(add/g);
      add=(add/g)+(add%g);
    }
    printf("%d\n",v);
}
return 0;
}
