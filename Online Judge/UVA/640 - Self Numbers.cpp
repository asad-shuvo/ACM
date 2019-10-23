#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,sum=9;
    printf("1\n3\n5\n7\n9\n");
    for(i=1; ;i++){
        sum=sum+11;
        if(sum>10000)
            break;
        printf("%lld\n",sum);
    }
    printf("\n");
}
