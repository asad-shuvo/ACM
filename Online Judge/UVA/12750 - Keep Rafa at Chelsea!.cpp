#include<bits/stdc++.h>

int main()
{
    char ch[100];
    int i,j=0,k,ln,n,cl=0,f=1;
   // scanf("%d",&n);
    gets(ch);
    ln=strlen(ch);
    for(i=0;i<ln;i++)
    {
        if(ch[i]=='L')
            cl++;
        else if(ch[i]=='D')
            cl++;
        else if(ch[i]=='L')
            cl=0;
        if(cl>=3)
        {
            f=0;
        }
        j++;
    }
    if(f==0)
        printf("%d\n",j);
        else printf("Yay! Mighty Rafa persists!\n");
}

