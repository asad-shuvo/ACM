#include <bits/stdc++.h>
using namespace std;
int main(){
    char a,b,c[1000];
    int p,q,sum=0;
    while(scanf("%d",&p)!=EOF){

    a=getchar();
    scanf("%d",&q);
    b=getchar();
    scanf("%s",c);
    int value=0;
    int ln=strlen(c);
    if(c[0]=='?'){
        sum=sum+0;
    }
    else{
    for(int i=0;i<ln;i++){
        value=value*10+c[i]-'0';
    }
    if(a=='+'){
        if(p+q==value)
            sum++;
    }
    else
    {
        if(p-q==value)
            sum++;
    }
    }
    }
     printf("%d\n",sum);
   // printf("%d",value);
}
