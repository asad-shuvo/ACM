#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int ln,i=1,j,k,l;
    while(scanf("%s",ch)!=EOF){;
    ln=strlen(ch);
    if(ln==5)
    {
        if(ch[0]=='H'&& ch[1]=='E' && ch[2]=='L' &&  ch[3]=='L' &&  ch[4]=='O')
            printf("Case %d: ENGLISH\n",i);
        else if (ch[0]=='H'&& ch[1]=='A' && ch[2]=='L' &&  ch[3]=='L' &&  ch[4]=='O')
            printf("Case %d: GERMAN\n",i);
            else printf("Case %d: UNKNOWN\n",i);
    }
    else if(ln==4)
    {
         if(ch[0]=='H'&& ch[1]=='O' && ch[2]=='L' &&  ch[3]=='A')
            printf("Case %d: SPANISH\n",i);
        else  if(ch[0]=='C'&& ch[1]=='I' && ch[2]=='A' &&  ch[3]=='O')
            printf("Case %d: ITALIAN\n",i);
            else printf("Case %d: UNKNOWN\n",i);
    }
    else if(ln==7)
    {
         if(ch[0]=='B'&& ch[1]=='O' && ch[2]=='N' &&  ch[3]=='J' &&  ch[4]=='O' && ch[5]=='U' && ch[6]=='R')
        printf("Case %d: FRENCH\n",i);
        else printf("Case %d: UNKNOWN\n",i);
    }
    else if(ln==12)
    {
         if(ch[0]=='Z' && ch[1]=='D' && ch[2]=='R' &&  ch[3]=='A' &&  ch[4]=='V' && ch[5]=='S' && ch[6]=='T' && ch[7]=='V'&& ch[8]=='U' && ch[9]=='J' &&  ch[10]=='T' &&  ch[11]=='E' )
        printf("Case %d: RUSSIAN\n",i);
        else printf("Case %d: UNKNOWN\n",i);
    }
    else if(ch[0]=='#')
        break;
        else
            printf("Case %d: UNKNOWN\n",i);
        i++;
}
return 0;
}
