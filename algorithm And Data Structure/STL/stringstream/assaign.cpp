#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    string a,b;
    int num,j,k,l;
 //   gets(str);
    getline(cin,a);
   // stringstream ss(str);
   stringstream ss(a);
    vector<int>v;
    vector<string>s;
/*    while(ss>>num){
        v.push_back(num);

    }*/
    while(ss>>b){
           // cout<<b;
        s.push_back(b);
    }
   for(j=0;j<s.size();j++)
       cout<<s[j]<<" ";

}
