#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i,j,k,l,m,n;
    gets(str);
    int ln=strlen(str);
    for(i=0;i<ln;i++)
    {
        str[i]=(str[i]-'A');
    }
    printf("%s",str);
}
