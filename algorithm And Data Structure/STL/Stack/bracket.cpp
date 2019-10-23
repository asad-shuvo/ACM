#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str;
    int i,j,k,l,test;
    cin>>test;
    getchar();
    while(test--){
    getline(cin,str);
   // getchar();
    int ln=str.size();
     stack<char>s;
    for(i=0;i<ln;i++){
            if( !s.empty() && str[i]==')' && s.top()=='(')
                s.pop();
            else if(!s.empty() && str[i]==']' && s.top()=='[')
                s.pop();
                else
            s.push(str[i]);
           }
    if(s.empty())
        cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
            while(!s.empty()){
                s.pop();
            }
    }
    return 0;
}
