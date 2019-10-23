#include <stdio.h>
#include <string.h>
//#include <math.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    char str[100];
    int i,j,k,sum,ln,flag;
    while(gets(str)){
            flag=0;
    sum=0;
    ln=strlen(str);
    for(i=0;i<ln;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            sum=sum+(str[i]-96);
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            sum=sum+(str[i]-38);
        }
    }
    for(i=2;i<sum;i++)
    {
        if(sum%i==0)
            flag=1;
    }
    if(flag==0)
    {
        printf("It is a prime word.\n");

    }
    else
        printf("It is not a prime word.\n");
}
return 0;
}
