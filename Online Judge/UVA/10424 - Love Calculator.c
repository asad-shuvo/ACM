#include <stdio.h>
#include <string.h>
int main ()
{
    char a[100],b[100];
    int i,j,k,l,m,n,ln,ln2,sum1=0,sum2=0,s=0,s1=0,r,r1;
    scanf("%s%s",a,b);
    ln=strlen(a);
    ln2=strlen(b);
    for(i=0;i<ln;i++)
    {
        if(a[i]>='a' && a[i]<='z'){
        sum1=(sum1+a[i]-96);
        }
         if(a[i]>='A' && a[i]<='Z')
         {
             sum1=(sum1+a[i]-64);
         }
    }
    for(i=0;i<ln2;i++)
    {
        if(b[i]>='a' && b[i]<='z'){
        sum2=(sum2+b[i]-96);
        }
         if(b[i]>='A' && b[i]<='Z')
         {
             sum2=(sum2+b[i]-64);
         }
    }
    if(sum1>9)
    {
        while(sum1!=0){
        while(sum1!=0)
        {
            r=sum1%10;
            s=s+r;
            sum1=sum1/10;
        }
        if(s>9)
            sum1=s;

    }
    }
     if(sum2>9)
    {
        while(1){
        while(sum2!=0)
        {
            r1=sum2%10;
            s1=s1+r1;
            sum2=sum2/10;
        }
          if(s1>9)
            s1=sum2;
    }
    }
    printf("%d\n",s);
    printf("%d\n",s1);

}
