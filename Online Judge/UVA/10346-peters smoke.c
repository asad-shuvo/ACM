#include <stdio.h>
int main()
{
   long int i,j,k,s,l,t;
    while(scanf("%ld%ld",&i,&j)!=EOF)
    {
        if(j>i){
            t=j;
            j=i;
            i=t;
        }
    k=i/j;
    l=k/j;
    s=i+l+k;
    printf("%ld\n",s);
}
return 0;
}
