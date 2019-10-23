#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i,j,k,l,b,a,c,m,value=0;
   // for(i=0;i<3;i++){
        a=str[0]-'A';
        value+=a*pow(26,2);
        b=str[1]-'A';
        value+=a*pow(26,1);
        c=str[2]-'A';
        value+=a*pow(26,0);
        printf("%d",value);
    }
}
