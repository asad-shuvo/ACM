#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<=10;i++)
        v.push_back(i);
    v.erase(v.begin()+1);
    v.erase(v.begin(),v.begin()+2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
