#include <stdio.h>
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d%d",&i,&j)!=0)
    {
    if(i%3==0)
    {
         k=90;
        if(j==0){
                l=k;

        }
       else{
        l=(k-(1.5*10));
    }
    }
    else
    {
        k=180;
        if(j==0)
        {
            l=k;
        }
        else{
        l=(k-(1.5*10));
    }
    }
    printf("%d",l);

}
return 0;
}
