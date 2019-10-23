#include <bits/stdc++.h>
using namespace std;
long long int fa(long long int a){
    int r=1,j,k,i;
    for(i=1;i<=a;i++){
        r=r*i;
    }
    return r;
}
int main()
{
    unsigned long long  n,m,c,i,j,k,l,fact,f,x,y;
    while(scanf("%llu%llu",&n,&m)!=EOF){
            if(n==0 && m==0)
            break;
     x=n;
     y=m;
     //fact=1;
     //f=1;
   /* for(i=1;i<=m;i++){
        fact=fact*(n-i+1);
        f=f*i;
    }
    c=fact/f;
    */
    fact=fa(n)/(fa(m)*fa(n-m));
    printf("%llu things taken %llu at a time is %llu exactly.\n",x,y,fact);
    }
    return 0;
}
