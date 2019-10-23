#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l,m,n,hr;
    cin>>hr;
    cin>>a;
    if(hr==12){
    for(i=0;i<a.size();i++){
     if(a[0]>'1' && a[1]!='0'){
        a[0]='0';
        }
        if(a[0]>'1' && a[1]=='0')
            a[0]='1';
        if(a[0]=='0' && a[1]=='0')
            a[1]='1';
        if(a[0]=='1' && a[1]>'2')
            a[0]='0';
        //if(a[1]==0 && a[0]==0)
          ///  a[1]='1';
        if(a[3]>'5'){
            a[3]='0';
        }
    }
    }
     if(hr==24){
    for(i=0;i<a.size();i++){
     if(a[0]>'2'){
        a[0]='0';
        }
        if(a[0]=='2' && a[1]>'3')
            a[0]='0';
        if(a[3]>'5'){
            a[3]='0';
        }
    }
    }
    cout<<a<<endl;
}
