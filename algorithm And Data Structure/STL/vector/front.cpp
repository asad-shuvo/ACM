#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(123);
    v.push_back(234);
    v.front() -=v.back();
    cout<<v.front()<<endl;

}
