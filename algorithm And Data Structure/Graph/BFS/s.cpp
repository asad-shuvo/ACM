#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
   it=s.find(33);
    if(it!=s.end())
    {
        cout<<"Y";
    }
    else cout<<"N";
   // if(s.find(1)) cout<<"y";
}
