#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[500];
    int i,j,k,l,m,n,value;

    while(gets(a)){
            int ln=strlen(a);
        value=0;
    for(i=0;i<ln;i++){
       // value=0;
            if(a[i]=='!'){
            printf("\n");
        }
           else  if(a[i]>='0' && a[i]<='9'){
                value=(value*10)+(a[i]-'0');
            }
        else if(a[i]=='b'){
            for(j=0;j<value;j++){
                    printf(" ");
                }
                // i=i+1;
    value=0;

        }
            else{
                for(j=0;j<value;j++){
                    printf("%c",a[i]);
                }
                //i=i+1;
               value=0;
            }

    }
    printf("\n");
    }
    return 0;
}




