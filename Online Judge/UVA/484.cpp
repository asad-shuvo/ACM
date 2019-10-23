#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    vector<int>v;
    int i,j,k,l,m,n;
    getline(cin,a);
    stringstream ss(a);
    while(ss>>k){
        v.push_back(k);
    }

    int cnt;
    for(i=0;i<v.size();i++){
            cnt=1;
        for(j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                cnt++;
                v.erase(v.begin()+j);
            }
        }
        cout<<a[i]<<" "<<cnt<<endl;
    }

}
