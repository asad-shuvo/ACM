#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,l,m,n;
    cin>>s;
    l=s.size();
    for(i=0;i<s.size();i++){
        if(s[i]=='0'){
            s.erase(s.begin()+i);
            break;
        }
    }
   if(l==s.size()){
        s.erase(s.begin()+1);
    }
    cout<<s<<endl;
}
