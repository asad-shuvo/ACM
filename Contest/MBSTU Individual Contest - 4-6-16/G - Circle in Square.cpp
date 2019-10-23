#include <bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    int t,i=0;
    double n,a_s,a_c;
    cin>>t;
    while(t--){
            i++;
    cin>>n;
    a_c=pi*n*n;
    n=2*n;
    a_s=n*n;
    double area=a_s-a_c;
    printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}
