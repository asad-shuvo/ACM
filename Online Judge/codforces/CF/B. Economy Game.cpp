#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    long long int i,j,k=0,f=0,l,m,n;
    cin>>n;
            if(n%1234==0)
             printf("YES\n");
           else if(n%123456==0)
             printf("YES\n");
           else if(n%1234567==0)
             printf("YES\n");
    else{
            while(1){
        n=n-1234;
         if(n==0){
            f=1;
            break;
        }
        else if(n<0){
            k=1;
            break;
        }
        n=n-123456;
         if(n==0){
            f=1;
            break;
        }
        else if(n<0){
            k=1;
            break;
        }
        n=n-1234567;
        if(n==0){
            f=1;
            break;
        }
        else if(n<0){
            k=1;
            break;
        }
    }
    if(f==1)
        printf("YES\n");
    else if(k==1)
        printf("NO\n");
    }
}
