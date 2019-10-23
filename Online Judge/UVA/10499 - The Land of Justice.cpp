#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF){
            if(n<0)
            break;
        if(n==1){
            printf("0%%\n");
        }
        else
            printf("%lld%%\n",n*25);
    }
    return 0;
}
