#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,l,m,n,f=0;
    set<string>s;
    set<string>::iterator it;
    while(getline(cin,a)){
        for(i=0;i<a.size();i++){
            if(isalpha(a[i])){
                f=1;
            }
            else
            {
                a[i]=' ';
            }
        }
        stringstream ss(a);
        while(ss>>b){
                for(j=0;j<b.size();j++){
                    if(b[j]>='A' && b[j]<='Z')
                    {
                        b[j]='a'+b[j]-'A';
                    }
                }
            s.insert(b);
        }
    }
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }

}
