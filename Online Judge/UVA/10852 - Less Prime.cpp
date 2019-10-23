#include<bits/stdc++.h>
using namespace std;
long long int prime(int a){
    int p,q,r,sq;
    sq=sqrt(a);
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else if(a%2==0)
        return 0;
    else{
    for(p=3;p<=sq;p=p+2){
        if(a%p==0)
            return 0;
    }
    }
    return 1;
}
int main()
  {
    long long int i,j,p,k,l,m,n,test;
    scanf("%lld",&test);
    while(test--){
    scanf("%lld",&n);
    for(i=(n/2+1);i<n;i++){
        if(prime(i)==1){
            p=i;
            break;
        }
    }
    printf("%lld\n",p);
    }
    return 0;
}
