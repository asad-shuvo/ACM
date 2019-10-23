#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int , pair<int,int> >p;
    p=make_pair(12, make_pair(12,13));
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
}
