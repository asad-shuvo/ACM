#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k,l,m,n;
    scanf("%d%d%d",&a,&b,&n);
    for(i=1;i<=n;i++){
        m=(1+b)/a;
        //cout<<m<<endl;
        //if(i==n+1)
          //  break;
       // b=m;
       // cout<<b<<endl;
        a=b;
        b=m;
        //cout<<a<<endl;
    }
    cout<<m;
}
