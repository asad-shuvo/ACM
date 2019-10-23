#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

int main()
{
    int test;
    cin>>test;
    while(test--){
    dd R1,R2,R3;
    cin>>R1>>R2>>R3;
    dd k1=1.0/R1;
    dd k2=1.0/R2;
    dd k3=1.0/R3;
    dd k4=k1+k2+k3+2*(sqrt(k1*k2+k2*k3+k3*k1));
    dd R4=1/k4;
    pr("%.8lf\n",R4);
    //cout<<R4<<endl;
}

}
