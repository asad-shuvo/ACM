#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t,gcd,sum,i,j,k,l,n;
    while(scanf("%lld",&n))
    {
        sum=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                a=i;
                b=j;
                while(b!=0)
                {
                    t=b;
                    b=a%b;
                    a=t;
                }
                gcd=a;
                sum+=gcd;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;

}
