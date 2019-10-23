#include <stdio.h>
int main()
{
    char ch[1000];
    int i,j,k,c_M=0,c_A=0,c_G=0,c_R=0,c_I=0,c_T=0;
    gets(ch);
    ln=strlen(ch);
    for(i=0;i<ln;i++)
    {
        if(ch[i]=='A')
            c_A++;
        else if(ch[i]=='M')
            c_M++;
          else if(ch[i]=='R')
            c_R++;
          else if(ch[i]='G')
            c_G++;
           else if(ch[i]=='I')
                c_I++;
            else if(ch[i]=='T')
                c_T++;
    }


}
