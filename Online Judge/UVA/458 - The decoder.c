#include <stdio.h>
#include <string.h>
int main()
{
   char ch[1000];
   int i,j,length;
   while(gets(ch)){
    length=strlen(ch);
    for(i=0;i<length;i++)
    {
        printf("%c",ch[i]-7);
    }
    printf("\n");
   }
    return 0;
}
