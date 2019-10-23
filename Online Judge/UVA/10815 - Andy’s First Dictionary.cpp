#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
   // freopen("out.txt","w",stdout);
    set<string>s;
    set<string>::iterator it;
    string a,b,c;
    //char c[1000];
    int i,j,k;
    while(getline(cin,a)){
    stringstream ss(a);
    while(ss>>b){
            for(i=0;i<b.size();i++){
                if(b[i]>='A' && b[i]<='Z'){
                    b[i]=b[i]-'A'+'a';
                }
            }
            k=0;
            for(i=0;i<b.size();i++){
                if(b[i]<'a' || b[i]>'z'){
b.erase(b.begin()+i);
                    for(j=i+1;j<b.size();j++){
                        c[k++]=b[j];
                       // b.erase(b.begin()+j);
                    }
                   // b.erase(b.begin()+i);
                b.erase(b.begin()+i,b.begin()+(i+k));
                   // b.erase(b.begin()+i,b.begin()+(i+k));
                }
            }
            for(i=0;i<b.size();i++){
                if(b[i]<'a' || b[i]>'z'){
                    b.erase(b.begin()+i);
                }
            }
            if(c.size()!=0){
            for(i=0;i<c.size();i++){
                if(c[i]<'a' || c[i]>'z'){
                    c.erase(c.begin()+i);
                }
            }}

            s.insert(b);
            if(c.size()!=0)
            s.insert(c);
    }
    }
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;
}

