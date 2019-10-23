#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g,x,k;
    int i,j,l,m,n;
    cin>>x>>k;
    a=x/k;
    b=x/k;
     f=0;
    for(i=1;i<=k;i++){
        for(j=1;j<=k;j++){
            d=a*i+b*j;
            if(d==x)
            {
                f=1;
                m=i;
                n=j;
                break;
            }
        }
        if(f==1)
            break;
    }
    cout<<m<<" "<<n;
}
