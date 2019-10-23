#include <stdio.h>
#include<math.h>
int a[100000],co=0;
int main()

{
   // freopen("input.txt","rt",stdin);
    long long int i,j,k,l,m,mx,cnt,pos,n,test,sq;
    scanf("%lld",&test);
    while(test--)
    {
        mx=0;
    scanf("%lld%lld",&m,&n);
    for(i=m;i<=n;i++)
    {
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
                a[co++]=cnt;

        }
        }
        else
        {
            for(j=1;j<=sq;j++)
            {
                if(k%j==0)
                    cnt=cnt+2;
                    a[co++]=cnt;
            }
        }
        if(cnt>mx)
        {

            mx=cnt;
            pos=k;
        }
    }
    int sett=max(a,co);
    printf("%d\n",sett);
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors\n",m,n,pos,mx);
}
}

