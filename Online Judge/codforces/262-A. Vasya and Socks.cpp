#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,p2;
    scanf("%d%d",&n,&m);
    int sum=0,sum1=0;
    int n1=n;
    while(1){
    while(n1>=m){
        sum+=n1/m;
        n1=n1/m;
    }
    if(sum>=m){
            sum1+=sum;
        n1=sum;
    }
    else{
            sum1+=sum;
        break;
    }
    }
    cout<<sum1+n<<endl;
}
