#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    int d1=abs(a-b);
    int d2=abs(a-c);
    int d=d1+d2;
    v.push_back(d);
    int d3=abs(b-a);
    int d4=abs(b-c);
    int d5=d3+d4;
    v.push_back(d5);
    int d6=abs(c-a);
    int d7=abs(c-b);
    int d8=d6+d7;
    v.push_back(d8);
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}
