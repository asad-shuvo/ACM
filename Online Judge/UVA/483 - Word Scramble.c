#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int ln,i,j,k=0;
    gets(str);
    ln=strlen(str);
    for(i=0;i<ln;i++)
    {
        if(str[i]==' ')
        {
            for(j=i;j>=0;j--)
            {
                printf("%s ",str);
            }
            k=0;
        }
    }
}
