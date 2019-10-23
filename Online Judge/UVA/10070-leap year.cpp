#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt","rt",stdin);
    char s[100000];
    int ln,i,n,p,k,l,m,cont=0;
   while(gets(s)){
        if(cont>0)
        printf("\n");
   cont++;
        n=0,p=0,k=0;l=0,m=0;
    ln=strlen(s);
    for(i=0;i<ln;i++)
    {
        n=((n*10)+(s[i]-'0'))%4;
   p=((p*10)+(s[i]-'0'))%100;
   k=((k*10)+(s[i]-'0'))%15;
    l=((l*10)+(s[i]-'0'))%400;
   m=((m*10)+(s[i]-'0'))%55;

    }

    if((n==0 && p!=0) || (l==0)){
        printf("This is leap year.\n");
        if(k==0 && m==0){
            printf("This is huluculu festival year.\n");
            printf("This is buluculu festival year.\n");
        }
        else if(k==0 && m!=0){
             printf("This is huluculu festival year.\n");
        }
        else if(k!=0 && m==0){
             printf("This is buluculu festival year.\n");
        }
    }
    else if(k==0)
      printf("This is huluculu festival year.\n");
    else
        printf("This is an ordinary year.\n");

}
return 0;
}

