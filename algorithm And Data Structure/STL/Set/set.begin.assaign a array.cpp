#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,5,5,6,1,2};
    set<int>s (arr,arr+10);
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    s.clear();
    s.insert(3);
    s.insert(2);
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
}
