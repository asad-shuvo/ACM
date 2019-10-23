#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m,rem,sum;
    while(scanf("%d",&n)!=EOF){
            i=0;
    rem=0;
    while(1){
            i++;
        sum=rem*10+1;
        rem=sum%n;
        if(rem==0)
            break;
    }
    printf("%d\n",i);
    }
    return 0;
}
