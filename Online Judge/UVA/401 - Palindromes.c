#include <stdio.h>
#include <string.h>
int main()
{
//freopen("input.txt","rt",stdin);
    char s[100];
    int ln,i,j,k,l,m,n,chk,CK;
    while(scanf("%s",s)!=EOF){
            chk=0;
    CK=1;
    ln=strlen(s);
    for(i=0,j=ln-1;i<=ln/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            CK=0;
            break;
        }

    }
    for(i=0,j=ln-1;i<=ln/2;i++,j--)
    {
       // if((s[i]=='A' && s[j]!='A') || (s[i]=='E' && s[j]!='3') || (s[i]=='M' && s[j]!='M') ||  (s[i]=='I' && s[j]!='I') ||  (s[i]=='J' && s[j]!='L') ||  (s[i]=='L' && s[j]!='J') ||  (s[i]=='O' && s[j]!='O') ||  (s[i]=='S' && s[j]!='2') ||  (s[i]=='T' && s[j]!='T') ||  (s[i]=='U' && s[j]!='U') ||  (s[i]=='V' && s[j]!='V') ||  (s[i]=='W' && s[j]!='W') ||  (s[i]=='X' && s[j]!='X') ||  (s[i]=='Y' && s[j]!='Y') ||  (s[i]=='Z' && s[j]!='5') ||  (s[i]=='1' && s[j]!='1') ||  (s[i]=='2' && s[j]!='S') ||  (s[i]=='3' && s[j]!='E') ||  (s[i]=='5' && s[j]!='Z') ||  (s[i]=='8' && s[j]!='8'))
        if((s[i]=='A' && s[j]=='A') || (s[i]=='E' && s[j]=='3') || (s[i]=='M' && s[j]=='M') ||  (s[i]=='I' && s[j]=='I') ||  (s[i]=='J' && s[j]=='L') ||  (s[i]=='L' && s[j]=='J') ||  (s[i]=='O' && s[j]=='O') ||  (s[i]=='S' && s[j]=='2') ||  (s[i]=='T' && s[j]=='T') ||  (s[i]=='U' && s[j]=='U') ||  (s[i]=='V' && s[j]=='V') ||  (s[i]=='W' && s[j]=='W') ||  (s[i]=='X' && s[j]=='X') ||  (s[i]=='Y' && s[j]=='Y') ||  (s[i]=='Z' && s[j]=='5') ||  (s[i]=='1' && s[j]=='1') ||  (s[i]=='2' && s[j]=='S') ||  (s[i]=='3' && s[j]=='E') ||  (s[i]=='5' && s[j]=='Z') ||  (s[i]=='8' && s[j]=='8'))
            {

            chk=1;
            }
            if(chk==0)
            break;
    }
    if(CK==0 && chk==0)
        printf("%s -- is not a palindrome.\n",s);
    else if(chk==1 && CK==1)
        printf("%s -- is a mirrored palindrome.\n",s);
    else if(chk==1 && CK==0)
        printf("%s -- is a mirrored string.\n",s);
    else if(CK==1 && chk==0)
        printf("%s -- is a regular palindrome.\n",s);
        printf("\n");

}

}
