#include <stdio.h>
#include<math.h>
int main()
{
   // freopen("input.txt","rt",stdin);
    long long int i,j,k,l,m,mx,cnt,pos,n,test,sq;
    scanf("%lld",&test);
    while(test--)
    {
        mx=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
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

        }
        }
        else
        {
            for(j=1;j<=sq;j++)
            {
                if(k%j==0)
                    cnt=cnt+2;
            }
        }
        if(cnt>=mx)
        {

            mx=cnt;
            pos=k;
        }
    }
    printf("%lld\n",pos);
}
}

