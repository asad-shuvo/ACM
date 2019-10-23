#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("No\n");
        else{
            sum=b-a;
        if(sum<=6)
            printf("Yes\n");
        else
            printf("No\n");
    }
    }
        }
