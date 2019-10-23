#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    int i,j,k,l,m,n;
    while(gets(str)){
    int ln=strlen(str);
    k=-1;
    int p=0;
    for(i=0;i<ln;i++){
        if(str[i]==' '){
          //      p++;
            for(j=i-1;j>k;j--){
                printf("%c",str[j]);
            }
        //if(p==1)
            printf(" ");
            k=i;
        }
        }
        for(j=ln-1;j>k;j--){
            printf("%c",str[j]);
    }
    printf("\n");
    }
    return 0;
}
