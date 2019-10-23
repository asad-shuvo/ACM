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
    char str[1000];
    sc("%s",str);
    strlwr(str);
    int ln=strlen(str);
    for(int i=0;i<ln;i++){
        if(str[i]=='a' || str[i]=='i' || str[i]=='o'||str[i]=='u'||str[i]=='e' || str[i]=='y'){}
        else
            pr(".%c",str[i]);
    }
    pr("\n");
}

