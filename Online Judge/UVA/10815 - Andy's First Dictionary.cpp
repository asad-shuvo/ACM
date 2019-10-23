#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
   // freopen("output.txt","w",stdout);
    string  b,c;
    char a[100],str[100];
    set<char>s;
    int i,l;
    set<string>::iterator it;
    while((cin>>a)){
        stringstream ss(a);
        while(ss>>b){
                l=0;
        int ln=strlen(b);
            for(i=0;i<ln;i++){
                if(b[i]>='A' && b[i]<='Z'){
                    b[i]=(b[i]-'A')+'a';
                }
            }
            for(i=0;i<ln;i++){
                if(b[i]<'a' || b[i]>'z'){
                    str[l++]=b[i];
                }
            }
            s.insert(str);
        }

        }

    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;
}
