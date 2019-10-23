#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    char s[10];
    double a,b,c,d,value;
    int test,t=0,i;
    double sum,v;
    scanf("%d",&test);
    while(test--){
        t++;
            value=0;
    scanf("%lf",&a);
    getchar();
    gets(s);
int    ln=strlen(s);
    if(ln>3){
        for(i=2;s[i]!=' ';i++){
            value=value*10+s[i]-'0';
        }
        v=a*.5+value*.05;
    }
    else
        v=a*.5;
    printf("Case %d: %g\n",t,v);
    }
return 0;
}
