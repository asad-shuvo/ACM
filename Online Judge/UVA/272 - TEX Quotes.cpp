#include<bits/stdc++.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    char s[100000];
    int i,j,ln,k,l,count=0;
    while(gets(s)){
    ln=strlen(s);
    for(i=0;i<ln;i++)
    {
        if(s[i]=='"')
        {
            count++;
            if(count%2==0)
                printf("''");
             else
             printf("``");
        }
        else printf("%c",s[i]);
    }
    printf("\n");
}
return 0;
}
