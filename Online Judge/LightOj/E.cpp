#include <bits/stdc++.h>
#define ll long long int
int a[1000005],arr[1000005],ar[1000005];
int main()

{
   // freopen("input.txt","rt",stdin);
    ll i,j,k,l,m,mx,cnt,pos,n,test,sq,p,t=0;
    scanf("%lld",&test);
    while(test--)
    {
        ll coo=0,co=0;
        mx=0;
    scanf("%lld%lld",&m,&n);
    for(i=m;i<=n;i++)
    {
        ar[coo++]=i;
        k=i;
        sq=sqrt(k);
        cnt=0;
        if(sq*sq==k)
            cnt=cnt-1;
        if(k%2==1){
        for(j=1;j<=sq;j=j+2)
        {
            if(k%j==0)
                cnt=cnt+2;
              //  a[co++]=cnt;

        }
        }
        else
        {
            for(j=1;j<=sq;j++)
            {
                if(k%j==0)
                    cnt=cnt+2;
                //   a[co++]=cnt;
            }
        }
        if(cnt>mx)
        {

            mx=cnt;
            pos=k;
        }
        a[co++]=cnt;
    }
        scanf("%lld",&p);
    for(i=0;i<p;i++){
        scanf("%lld",&arr[i]);
    }
  ll maxxx=0;
ll pos;
    for(i=0;i<co;i++){
            ll x=a[i];
        ll p1=arr[x];
    if(p1>maxxx){
        maxxx=p1;
        pos=ar[i];
    }
    }
    printf("Case %lld: %lld\n",++t,pos);
//printf("\n");
//    printf("%d\n",maxx);
   //printf("Between %lld and %lld, %lld has a maximum of %lld divisors\n",m,n,pos,mx);
}
return 0;
}

