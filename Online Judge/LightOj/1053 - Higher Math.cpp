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
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int main()
{
    int A,B,C,test,te=0;
    sc("%d",&test);
    while(test--){
    sc("%d%d%d",&A,&B,&C);
    int M=max(A,B);
    M=max(M,C);
    int a,b;
    if(C==M){
        a=A;
        b=B;
    }
    if(A==M){
        a=B;
        b=C;
    }
    else if(B==M){
        a=A;
        b=C;
    }
    if(M*M==a*a+b*b)pr("Case %d: yes\n",++te);
    else
        pr("Case %d: no\n",++te);
}
}

