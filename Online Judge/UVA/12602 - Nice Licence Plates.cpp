#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    double k,l,b,a,c,m,value;
    int v,i,j;
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
    gets(str);
    j=0;
    value=0;
    v=0;
    a=str[0]-'A';
        value=value+a*(pow(26,2));
       b=str[1]-'A';
        value=value+b*(pow(26,1));
       c=str[2]-'A';
       value=value+c*(pow(26,0));
   for(i=4;i<8;i++){
    v=v*10+str[i]-'0';
   }
if(v>value){
   if(v-value<=100)
   {
       printf("nice\n");
   }
   else
    printf("not nice\n");
    }
    else
    {
        if(value-v<=100)
             {
       printf("nice\n");
   }
   else
    printf("not nice\n");
    }
    }
       return 0;
    }
