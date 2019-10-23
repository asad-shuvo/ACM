#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>::iterator it;
    string s;
    for(int i=0;i<3;i++){
        cin>>s;
        m[s]++;
    }
    for(it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<" "<<(*it).second;
}
