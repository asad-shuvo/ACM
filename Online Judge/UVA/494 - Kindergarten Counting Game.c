#include <stdio.h>
int main()
{
    char ch[1000];
    int i,j,k,p;
    while(gets(ch)){
            p=0;
    for(i=0;ch[i]!='\0';i++)
    {
        if(((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
        &&
        ((ch[i+1]<'a' || ch[i+1]>'z')&&(ch[i+1]<'A' || ch[i+1]>'Z')))
            p++;
    }
    printf("%d\n",p);
}
return 0;
}
