#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,l,m,n;
    getline(cin,a);
    getline(cin,b);
    if(a.size()>b.size()){
        //int ln=a.size()-b.size();
        for(i=0;i<b.size();i++){
            cout<<b[i]<<a[i]<<endl;
        }
        for(i=b.size();i<a.size();i++)
            cout<<a[i]<<endl;
    }
   else if(a.size()<b.size()){
        //int ln=b.size()-a.size();
        for(i=0;i<a.size();i++){
            cout<<b[i]<<a[i]<<endl;
        }
        for(i=a.size()-1;i<b.size();i++)
            cout<<b[i]<<endl;
    }
    else if(a.size()==b.size()){
        //int ln=b.size()-a.size();
        for(i=0;i<a.size();i++){
            cout<<b[i]<<a[i]<<endl;
        }
    }
}
