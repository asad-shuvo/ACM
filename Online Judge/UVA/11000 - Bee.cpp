#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n;
    while(scanf("%lld",&n)){

            a=0;
    b=1;
    c=0;
            if(n<0)
            break;
    if(n==0){
        printf("0 1\n");
    }
    else{
    for(int i=1;i<=n;i++){
        c=a+b+1;
        a=b;
        b=c;
    }
    printf("%lld %lld\n",a,b);
}

    }
    return 0;
}
