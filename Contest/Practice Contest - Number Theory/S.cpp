///Accepted
#include<bits//stdc++.h>
using namespace std;
#define gama 0.57721566490
#define ll long long
#define mx 1000000
double a[mx+10];
int main()
{
    double sum =0.0;
    for(ll i=1; i<=mx; i++)
    {
        sum += (1.0/i);
        a[i] = sum;
    }
    ll n,TC, ind = 0;
    cin >> TC;
    while(TC--)
    {
        cin >>n;
        if(n>mx)
        {
            sum = log(n) + gama + (1/(2.0*n)) - (1/(12.0*n*n));
            printf("Case %lld: %.9lf\n",++ind,sum);
        }
        else
        {
            printf("Case %lld: %.9lf\n",++ind,a[n]);
        }
    }
}
