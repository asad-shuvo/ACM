#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>first;
    vector<int>second;
    first.push_back(123);
    second.push_back(456);
    first.swap(second);
    for(int i=0;i<second.size();i++)
    cout<<second[i]<<endl;
}
