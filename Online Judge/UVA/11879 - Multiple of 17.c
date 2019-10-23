#include <stdio.h>
#include <string.h>
int main()
{
    char num[10005];
    int i,rem,value=0,ln;
    gets(num);
    ln=strlen(num);
    for(i=0;i<ln;i++)
    {
        value=(value*10)+(num[i]-'0');
    }
    printf("%d",value);

}
