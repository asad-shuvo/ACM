#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    char c[5],d[1000];
    int i,j,k,l=0;
    getline(cin,a);
    vector<char>v;
int     t=0;
    for(i=0;i<a.size();i++){
             if((a[i]>'a' && a[i]<='z')|| (a[i]>='A' && a[i]<='Z')){
            if(a[i]=='a' || a[i]=='e' || a[i]=='i'|| a[i]=='u'  || a[i]=='o' || a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U'){
                for(j=i;a[j]!=' ';j++){
                   v.push_back(a[j]);
        i++;
                    if(j==a.size())
                        break;
                }
                 v.push_back('a');
               v.push_back('y');
            }
            else{
                c[0]=a[i];

                for(j=i+1;a[j]!=' ';j++){
                         i++;
                   v.push_back(a[j]);
                    if(j==a.size())
                        break;
                }
             v.push_back(c[0]);
              v.push_back('a');
               v.push_back('y');
            }
        }
        if(a[i]!=' ')
            v.push_back(a[i]);

   if(a[i]==' ')
    v.push_back(' ');
}
int ln=v.size();
v.erase(v.begin()+ln-3);
   for(i=0;i<v.size();i++){
    cout<<v[i];
}
}

