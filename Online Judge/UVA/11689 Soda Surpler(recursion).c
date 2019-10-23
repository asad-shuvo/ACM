#include <stdio.h>
int sum(int e,int f,int c)
{
    if((e+f)<c)
        return 1;
        else
            return 1+sum((e+f)/c);

}
int main()
{
    int e,f,c,s;
    scanf("%d%d%d",&e,&f,&c);
    s=sum(e,f,c);
    printf("%d",s);
}
