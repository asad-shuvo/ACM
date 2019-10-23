#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    cout<<"size_v"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
    cout<<"max_size"<<v.max_size()<<endl;
}
