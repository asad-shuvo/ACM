#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i,j,ln,m,n,k,sum,test;
    scanf("%d",&test);
    while(test--){
            k=0;
    sum=0;
    scanf("%s",str);
    ln=strlen(str);
    for(i=0;i<ln;i++)
    {
        if(str[i]=='0')
        {
            k++;
            sum=sum+k;
        }
        else if(str[i]=='X')
            k=0;
    }
    printf("%d\n",sum);
    }
    return 0;
}
