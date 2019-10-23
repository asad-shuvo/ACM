#include <stdio.h>
#include <string.h>
int main()
{
  char n[1005];
  int i,value,ln;
while(gets(n)){
        value=0;
ln=strlen(n);
    for(i=0;i<ln;i++)
    {
        value=((value*10)+(n[i]-'0'))%11;
    }
    if(value==0 && i==1)
        break;
       else if(value==0)
        printf("%s is a multiple of 11.\n",n);
        else
        {
            printf("%s is not a multiple of 11.\n",n);

        }
}
return 0;
}
