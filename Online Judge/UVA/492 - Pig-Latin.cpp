#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l;
    vector<char>v;
    getline(cin,a);
    for(i=0;i<a.size();i++){
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
           {
               if(a[i]=='i' || a[i]=='I' || a[i]=='A' || a[i]=='a' || a[i]=='O' || a[i]=='o' || a[i]=='E' || a[i]=='e' || a[i]=='U' || a[i]=='u'){
            for(j=i; ;j++){

                    i++;
                if(a[j]==' '){
                    v.push_back('a');
                    v.push_back('y');
                    i--;
                    break;
                }
             v.push_back(a[j]);
            }
           }
           }
           else
            cout<<a[i];
    }
    for(i=0;i<v.size();i++)
        cout<<v[i];
}
