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
VI v1,v2,v3,v4;
int main()
{
    string A,B,C;
   // int sz=0;
    while(getline(cin,A)){
        if(A.size()<=2){
            getline(cin,C);
            stringstream sss(C);
            int m;
            while(sss>>m){
                v1.push_back(m);
            }
           // getchar();
        }
        else{
            stringstream ss(A);
            int d;
            while(ss>>d){
                v2.push_back(d);
            }
        }

    }
}
