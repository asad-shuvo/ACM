#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll Extended_euclid(ll A,ll B,ll *X,ll *Y){
    ll x,y,u,v,m,n,a,b,q,r;
    x=0;
    y=1;
    u=1;
    v=0;
    for(a=A,b=B;0!=a;b=a,a=r,x=u,y=v,u=m,v=n){
        q=b/a;
        r=b%a;
        m=x-(u*q);
        n=y-(v*q);
    }
    *X=x;
    *Y=y;
    return b;
}
int main()
{
    ll a,b,x,y;
    while(scanf("%lld%lld",&a,&b)!=EOF){
    ll g=Extended_euclid(a,b,&x,&y);
   if((x==1 && y==0))
        swap(x,y);
        ll j=abs(y);
        if(j==x && y<0)
          swap(x,y);
    printf("%lld %lld %lld\n",x,y,g);
    }
}
