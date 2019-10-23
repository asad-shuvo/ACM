#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    string a,b,c,d;
    map<string,string>mp;
    cin>>n1;
    getchar();
    while(n1--){
        getline(cin,a);
        getline(cin,b);
        mp[a]=b;
    }
    cin>>n2;
    getchar();
    while(n2--){
        getline(cin,c);
        cout<<mp[c]<<endl;
    }
}
