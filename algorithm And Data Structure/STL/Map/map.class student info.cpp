#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string,string>,int>m;
    string name, area;
    for(int i=0; i<5; i++)
    {
        cin>>name>>area;
        m[make_pair(name,area)]++;
    }
    map<pair<string,string>,int>::iterator x;
    for(x=m.begin(); x!=m.end(); x++)
        cout<<(*x).first.first<< " "<< (*x).first.second<< " "<< (*x).second<<endl;
    return 0;
}
