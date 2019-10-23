#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d,e,f;
    cin>>a;
    b=a;
    c=b;
    if(a[0]!='-')
        cout<<a<<endl;
    else{
    int sz=a.size();
    b.erase(b.begin()+(sz-1));
    c.erase(c.begin()+(sz-2));

    if(b<c){
            if(b[1]=='0')
            cout<<"0"<<endl;
    else
        cout<<b<<endl;
    }
        else{
                if(c[1]=='0')
                cout<<"0"<<endl;
        else
        cout<<c<<endl;
        }
}
}

