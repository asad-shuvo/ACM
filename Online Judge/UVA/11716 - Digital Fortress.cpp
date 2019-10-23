#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10005];
    int i,j,k,ln,m,n,sq,test;
    scanf("%d",&test);
    getchar();
    while(test--){
    gets(s);
    ln=strlen(s);
    sq=sqrt(ln);
    if(sq*sq==ln){
        for(i=0;i<sq;i++){
            for(j=i;j<ln;j=j+sq){
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }
else
    printf("INVALID\n");
    }
    return 0;
}


