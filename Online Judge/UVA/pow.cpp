#include <bits/stdc++.h>
using namespace std;
int main()
{
    double i,j,value=0,a,b,c;
    char str[100];
    gets(str);
     a=str[0]-'A';
        value=value+a*(pow(26,2));
        //printf("\n%d",v);
       b=str[1]-'A';
        value=value+b*(pow(26,1));
       c=str[2]-'A';
       value=value+c*(pow(26,0));
       // printf("%d",value);
        printf("%.0lf",value);
}
