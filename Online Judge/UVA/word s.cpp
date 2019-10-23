#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i,k=0,l,j,m,n,ln;
    gets(str);
    ln=strlen(str);
    for(i=0;i<ln;i++)
    {
        k++;
       if(str[i]==' ')
       {
           for(j=k-1;j>=0;j--){
            printf("%c",str[j]);
           }
           //printf(" ");
           k=0;
       }

    }
}
