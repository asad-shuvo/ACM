#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double N,i,j,k,l;
    int test;
    scanf("%d",&test);
    while(test--){
    scanf("%lf",&N);
    double B=N/2;
    double A=pi*B*B;
    double A2=2*N*N;
    A2=A2/2;
    k=A2-A;
    printf("%.2lf\n",k);
    }
    return 0;
}
