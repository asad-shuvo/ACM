#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,c,d,p;
    while(scanf("%llu",&a)!=EOF && a>0){
    p=(a*10)/9;
    if(a%9==0){
        printf("%llu %llu\n",p-1,p);
    }
    else
        printf("%llu\n",p);
}
return 0;
}
