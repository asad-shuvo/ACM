#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l,m,n;
    while(cin>>a){
    int ck=0,ck1=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='B' || a[i]=='F' || a[i]=='P' || a[i]=='V'){
            a[i]='B';
        }
        else if(a[i]=='C' || a[i]=='G' || a[i]=='J' || a[i]=='K' || a[i]=='Q' || a[i]=='S' || a[i]=='X' || a[i]=='Z')
            a[i]='C';
        else if(a[i]=='D' || a[i]=='T')
            a[i]='D';
        else if(a[i]=='L')
            a[i]='L';
        else if(a[i]=='M' || a[i]=='N')
            a[i]='M';
        else if(a[i]=='R')
            a[i]='R';
    }
    for(i=0;i<a.size();i++)
    {
        if(i==0){
            if(a[i]=='B')
                cout<<"1";
            else if(a[i]=='C')
                cout<<"2";
            else if(a[i]=='D')
                cout<<"3";
            else if(a[i]=='L')
                cout<<"4";
            else if(a[i]=='M')
                cout<<"5";
            else if(a[i]=='R')
                cout<<"6";
        }
        else{
                        if(a[i]=='B' && a[i-1]!='B')
                cout<<"1";
            else if(a[i]=='C' && a[i-1]!='C')
                cout<<"2";
            else if(a[i]=='D' && a[i-1]!='D')
                cout<<"3";
            else if(a[i]=='L' && a[i-1]!='L')
                cout<<"4";
            else if(a[i]=='M' && a[i-1]!='M')
                cout<<"5";
            else if(a[i]=='R' && a[i-1]!='R')
                cout<<"6";
        }
    }
    cout<<endl;
    }
    //cout<<a;
}
