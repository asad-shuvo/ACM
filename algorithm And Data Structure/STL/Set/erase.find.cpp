#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    for(int i=1;i<=10;i++){
        s.insert(i*10);
    }
    s.erase(s.find(70));
    //it++;
   // s.erase(it);
   // s.erase(it,s.end());
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;

}
