#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    int i,j,k,ln,m,n,b;
    gets(str);
     ln=strlen(str);
    b=-1;
    for(i=0;i<ln;i++){
        if(str[i]==' '){
            for(j=i-1;j>b;j--)
                printf("%c",str[j]);
            printf(" ");
            b=i;
        }
    }
    for(i=ln-1;i>b;i--){
        scanf("%c",str[i]);
    }
    printf("\n");
}
