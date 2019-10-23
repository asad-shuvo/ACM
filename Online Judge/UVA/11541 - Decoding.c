#include <stdio.h>
#include <string.h>
int main()
{
    char str[200],str1[200];
    int i,j,k,n,m,ln;
    gets(str);
    ln=strlen(str);
    for(i=0;i<ln;i++)
    {
        if(str[i]>='1' && str[i]<=9)
        {
            n=str[i];
            for(j=0;j<n;j++)
            {
                printf("%c",str[i-1]);
            }
        }
    }
}
