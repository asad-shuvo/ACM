#include<bits/stdc++.h>
using namespace std;
long long int prime(int a)
{
    int p,q,f=1;
    for(p=2;p<=sqrt(a);p++){
        if(a%p==0)
    {
        f=0;
    }
    }
    return f;
}
int main()
{
    long long int n,i,j;
    while(scanf("%lld",&n))
    {
        i=3;
        if(n==0)
            break;
        while(i<n)
        {
            j=n-i;
            if(prime(i)&& prime(j))
            {
                printf("%lld = %lld + %lld\n",n,i,j);
                break;
            }
            i=i+2;
        }
        if(i>n)
            printf("Goldbach's conjecture is wrong.\n");
    }
}
