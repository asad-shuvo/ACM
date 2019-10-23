#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    unsigned long long ln,i,n=0,p=0,k=0,l=0,m=0,count=0;
   while(scanf("%s",s)==1){
        if(count>0)
        printf("\n");
   count++;
        n=0;
        p=0;
        k=0;
        l=0;
        m=0;
    ln=strlen(s);
    for(i=0;i<ln;i++)
    {
        n=((n*10)+(s[i]-'0'))%4;
   p=((p*10)+(s[i]-'0'))%100;
   k=((k*10)+(s[i]-'0'))%15;
    l=((l*10)+(s[i]-'0'))%400;
   m=((m*10)+(s[i]-'0'))%55;

    }
    if((n==0 && p!=0) || l==0)
    {
        printf("This is leap year.\n");
    if(m==0)
    {
        printf("This is bulukulu festival year.\n");
    }
    else if(k==0){
        printf("This is huluculu festival year.\n");
    }
    }
    else
    {
        if(k==0){
        printf("This is huluculu festival year.\n");
    }

    else
        printf("this is an ordinary year.\n");
    }

}
return 0;
}

