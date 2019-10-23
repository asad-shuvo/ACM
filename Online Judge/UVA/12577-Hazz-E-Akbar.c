#include <stdio.h>
#include <string.h>
int main()
{
    char ch[6];
    int i=1;
    while(1)
    {
        gets(ch);
        if(ch[0]=='*')
            break;
        else if(strlen(ch)==4)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else
            printf("Case %d: Hajj-e-Asghar\n",i);
        i++;

    }

    return 0;
}


