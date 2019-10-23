#include <stdio.h>
#include <string.h>
int main()
{
    char str[105],ch;
    long long int i,j,k,l,m,n,ln,rem;
    while(scanf("%s",str)!=EOF)
    {
        scanf("%lld",&n);
    rem=0;
    ln=strlen(str);
   // if(ln==1 && str[0]=='0')
       // break;
    for(i=0;i<ln;i++)
    {
        rem=(str[i]-'0')-rem*10;
        rem=rem%n;

    }
        printf("%lld\n",rem);
}
return 0;
}
