#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","w",stdout);
    string a;
    vector<int>v;
    int i,j,k,l,m,n;
    while(cin>>a){
    for(i=0;i<a.size();i++){
        if(a[i]=='B' || a[i]=='F' ||  a[i]=='P'  || a[i]=='V')
            v.push_back(1);
        else if(a[i]=='C' || a[i]=='G' ||  a[i]=='J'  || a[i]=='K' || a[i]=='Q' ||  a[i]=='S'  || a[i]=='X' || a[i]=='Z')
            v.push_back(2);
            else if(a[i]=='D' || a[i]=='T')
            v.push_back(3);

            else if(a[i]=='L')
            v.push_back(4);
            else if(a[i]=='M' || a[i]=='N')
            v.push_back(5);
             else if( a[i]=='R')
                v.push_back(6);
    }
    for(i=0,j=i+1;i<v.size();i++){
       // for(j=i+1;j<i+1;j++){
            if(v[i]==v[j]){
                v.erase(v.begin()+j);
                break;
            }
       // }
    }
    for(i=0;i<v.size();i++)
        cout<<v[i];
        cout<<endl;
        v.clear();
    }
    return 0;
}
