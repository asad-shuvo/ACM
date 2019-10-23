#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,ln;
    char str[100],str1[100];
    gets(str);
    ln=strlen(str);
    /*
    for(i=0;i<ln;i++)
    {
        if(str[i]>=' ' && str[i]<='z')
            //printf("%d",str[i]);
            str1[i]=str[i];
    }
    strrev(str1);
    printf("%s",str1);
    */

   // printf("%s",str);
   strrev(str);
   for(i=0;i<ln;i++){
   printf("%d",str[i]);
   }

}
