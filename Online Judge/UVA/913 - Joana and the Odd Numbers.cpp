#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,i,j,k,l,m,sum,sum1,sum2,sum3;;
    while(scanf("%llu",&n)!=EOF){
     sum=0;
     sum1,sum2,sum3;
    for(i=n;i>=3;i=i-2){
        sum+=i;
    }
    //cout<<sum<<endl;
    sum1=(sum*2+1);
   // cout<<sum1<<endl;
    sum2=(sum1-2);
    //cout<<sum1<<endl;
    sum3=(sum1-4)+sum1+sum2;
    printf("%llu\n",sum3);
    }
    return 0;
}
