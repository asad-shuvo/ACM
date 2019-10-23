#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,m,i,j,k,l,m,n;
    sacnf("%d%d%d",&a,&b,&n);
    for(i=1;i<=n;i++){
        m=(1+b)/a;
        if(i==n)
            break;
        b=m;
        a=b;
    }
    cout<<m;
}
