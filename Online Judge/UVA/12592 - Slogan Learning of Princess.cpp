#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","rt",stdin);
    string a[100],b[100],c,d,e,f,g;
    int i,test,t,j,k,l,n;
    cin>>test;
    getchar();
    for(i=0;i<test;i++){
        getline(cin,a[i]);
        getline(cin,b[i]);
        }
      cin>>t;
      getchar();
      for(i=0;i<t;i++){
        getline(cin,c);
        for(j=0;j<test;j++){
        if(c==a[j])
            cout<<b[j]<<endl;
        }
      }
    }

