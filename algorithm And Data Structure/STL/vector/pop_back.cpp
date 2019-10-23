#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<=3;i++){
        v.push_back(i);
    }
    int sum=0;
    while(!v.empty()){
        sum+=v.back();
         cout<<sum<<endl;
        v.pop_back();
    }
    cout<<sum<<endl;
}
