#include<bits/stdc++.h>
using namespace std;

int main()
{
    int TC;
    scanf("%d",&TC);
    while(TC--){
    double n;
    scanf("%lf",&n);
    double ans = 2.0 * n * n;
    ans = sqrt(ans);
    ans = ans*4.0;
    printf("%lf\n",ans);
    }
}
