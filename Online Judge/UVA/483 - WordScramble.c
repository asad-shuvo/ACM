#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int ln,i,j,k=0,l,m,n;
    gets(str);
    ln=strlen(str);
    for(i=0;i<ln;i++)
    {
        if(str[i]==' ')
        {
          for(j=k-1;j>0;j--)
          {
              printf("%s",str[j]);
          }
          k=0;
        }
        k++;
    }
}
