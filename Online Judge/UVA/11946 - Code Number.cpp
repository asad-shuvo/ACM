#include <bits/stdc++.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    char s[100];
    int i,j,k,ln,m,n,test;
    scanf("%d",&test);
    getchar();
    while(test--){
    while(gets(s)!='\0'){
    ln=strlen(s);
    for(i=0;i<ln;i++)
    {
        if(s[i]=='3')
            printf("E");
        else if(s[i]=='0')
        printf("O");
        else if(s[i]=='1')
        printf("I");
        else if(s[i]=='4')
        printf("A");
        else if(s[i]=='9')
        printf("P");
        else if(s[i]=='5')
        printf("S");
         else if(s[i]=='6')
        printf("G");
        else if(s[i]=='7')
        printf("T");
        else if(s[i]=='8')
        printf("B");
        else if(s[i]=='2')
            printf("Z");
        else
            printf("%c",s[i]);
    }
    printf("\n");
    }
    if(test>1)
        printf("\n");

    }
    return 0;
}
