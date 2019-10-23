#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(10);///10 zero initialized int
    int i;
    for(i=1;i<v.size();i++){
        v.at(i)=i;
    }
    for(i=1;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }

}
