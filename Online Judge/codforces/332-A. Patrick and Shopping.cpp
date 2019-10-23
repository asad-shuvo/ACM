///1=d1+d3+d2
///2=d1+d1+d2+d2
///3=d1+d3+d3+d1
///4=d2+d3+d3+d2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,d3,p1,p2,p3,mn;
    vector<int>v;
    cin>>d1>>d2>>d3;
    p1=d1+d2+d3;

    p2=2*d1+2*d2;
    mn=min(p1,p2);
    p3=2*d1+2*d3;
    mn=min(mn,p3);
int    p4=2*d2+2*d3;
    mn=min(mn,p4);
    cout<<mn<<endl;
}
