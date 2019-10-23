#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    string name,country;
    int i;
    for(i=0;i<3;i++){
        cin>>name>>country;
        m[country]++;
    }
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
