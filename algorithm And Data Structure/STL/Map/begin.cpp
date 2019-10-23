#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    map<char,int> :: iterator it;
    m['a']=100;
    m['b']=200;
    m['c']=300;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
