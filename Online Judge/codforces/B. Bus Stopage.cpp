#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,k,l,m,a,b,t,te=0;
    cin>>t;
    while(t--){
    cin>>n;
    int mx=0;
    n=n-1;
    p=0;
    while(n--){
        cin>>a>>b;
        p+=(a-b);
        if(p>mx)
        {
            mx=p;
        }
    }
    printf("Case %d: %d\n",++te,mx);
    }
}
