#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int limit,j=0,k,l,m,n,i,a,b;
    while(scanf("%lld%lld",&n,&limit)!=EOF){
            a=n;
    b=limit;
        i=1;
            if(n<0 && limit<0)
            break;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%2!=0){
            n=n*3+1;
        }
             if(n>limit)
            break;
            i++;

    }
    j++;
    printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,a,b,i);
}
return 0;
}
