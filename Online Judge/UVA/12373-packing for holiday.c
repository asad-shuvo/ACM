#include <stdio.h>
int main()
{
    int h,w,l,test,i;
    while(scanf("%d",&test)==1){
    for(i=1;i<=test;i++)
    {
        scanf("%d%d%d",&h,&w,&l);
    if(h<=20 && w<=20 && l<=20)
        printf("Case %d: good\n",i);
    else printf("Case %d: bad\n",i);
}
    }
return 0;
}
