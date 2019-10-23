#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll B,S,P,t=0;
    while(scanf("%lld%lld",&B,&S)!=EOF && S>0 && B>0){
        if(B==1 || B==0)
        printf("Case %lld: :-\\\n",++t);
     else if(B<=S)
        printf("Case %lld: :-|\n",++t);
    else if(B>S)
        printf("Case %lld: :-(\n",++t);
    }
}
