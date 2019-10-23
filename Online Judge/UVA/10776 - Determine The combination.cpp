#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    vector<char>v;
    set<char>s;
    set<char>:: iterator it;
    cin>>a;
    int m;
    cin>>m;
    int i,j;
    for( i=0;i<a.size();i++){
        s.insert(a[i]);
    }
    for(it=s.begin();it!=s.end();it++){
            v.push_back(*it);
        //cout<<(*it)<<endl;
    }
    for(i=0;i<v.size();i++){
            cout<<v[i];
        for(j=i+1;j<m;j++){
            cout<<v[j]<<endl;
        }
    }
}
