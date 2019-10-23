#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>G[105];
    vector<string>v;
    vector<string>beb;
    string a,b,c;
    string indeg[100];
    int n;
    cin>>n;
    while(n--){
        cin>>a;
        beb.push_back(a);
    }
    int pus;
    cin>>pus;
    while(pus--){
        cin>>b>>c;
        G[b].push_back(c);
        indegree[c]++;
    }
}
