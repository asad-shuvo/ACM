#include<bits/stdc++.h>
using namespace std;
int prime(int a){
int p;
if(a==1)
return 0;
else if(a==2)
    return 1;
else if(a%2==0)
    return 0;
else
{
    for(p=3;p<=sqrt(a);p=p+2){
        return 0;
    }
}
return 1;

}
int main()
{
    int n,i,j,k,l,m,cnt=0,sum=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(prime(i)==1){
        for(j=3;j<n;j++)
            {
                if(prime(j)==1){
                    sum+=i+j;
                    if(sum==n){
                            cnt++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d\n",cnt);
}
