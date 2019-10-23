#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,s,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&n);
    if(n<=10){
        printf("%d 0\n",n);
    }
    else if(n>10){
        printf("10 %d\n",n-10);
    }
    }
    return 0;
}
