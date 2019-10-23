#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int i,j,rem;
    int sum1,sum2,k,ln1,ln2;
    double s1,s2;
    double r;
    while(gets(a)){
            gets(b);
            sum1=0;
            sum2=0;
    ln1=strlen(a);
    ln2=strlen(b);
    for(i=0;i<ln1;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            sum1=sum1+(a[i]-'a'+1);
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            sum1=sum1+(a[i]-'A'+1);
        }

    }
    for(i=0;i<ln2;i++)
    {
        if(b[i]>='a' && b[i]<='z')
        {
            sum2=sum2+(b[i]-'a'+1);
        }
        else if(b[i]>='A' && b[i]<='Z')
        {
            sum2=sum2+(b[i]-'A'+1);
        }

    }
    while(1){
            s1=0;
    while(sum1>0)
    {
        rem=sum1%10;
        s1=s1+rem;
        sum1=sum1/10;
    }
    if(s1>9)
    {
        sum1=s1;
    }
    else
        break;
    }
    while(1){
        s2=0;
    while(sum2>0)
    {
        rem=sum2%10;
        s2=s2+rem;
        sum2=sum2/10;
    }
    if(s2>9)
    {
        sum2=s2;
    }
    else
        break;
    }
    if(s1>s2)
    r=(s2/s1)*100;
    else
        r=(s1/s2)*100;
    printf("%.2lf %%\n",r);
    }
}
