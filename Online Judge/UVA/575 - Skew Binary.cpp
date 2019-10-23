#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    char s[100];
     long long int ln,rem,i,j,k,l,m,n,sb;
 while(gets(s)){
        j=0;
 sb=0;

 ln=strlen(s);
 if(ln==1 && s[0]=='0')
    break;
 for(i=ln-1;i>=0;i--){
        j++;
    rem=s[i]-'0';
    sb=sb+rem*(pow(2,j)-1);
 }
    printf("%lld\n",sb);
 }
    return 0;
}
