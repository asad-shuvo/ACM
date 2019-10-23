#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m,test,f;
    scanf("%d",&test);
    while(test--){
            int f=0;
    scanf("%d",&n);
    for(i=(n-50);i<n;i++){
            int sum=0;
        j=i;
    while(j>0){
        int rem=j%10;
        sum+=rem;
        j/=10;
    }
    if(sum+i==n){
            f=1;
        printf("%d\n",i);
    break;
    }
    }
    if(f==0)
        printf("0\n");
    }
}
