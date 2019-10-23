#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,m,n;
    cin>>a;
    int a2=0,b=0,B=0,r=0,u=0,s=0,l=0;
    for(i=0;i<a.size();i++){
        if(a[i]=='B')
B++;
        if(a[i]=='a')
a2++;
        if(a[i]=='b')
            b++;
        if(a[i]=='r')
        r++;
        if(a[i]=='s')
        s++;
        if(a[i]=='u')
        u++;
        if(a[i]=='l')
    l++;
    }
    vector<int>v;
    v.push_back(B);
    int u1=u/2;
    v.push_back(u1);
    int a1=a2/2;
    v.push_back(a1);
    v.push_back(r);
    v.push_back(l);
    v.push_back(s);
    v.push_back(b);
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}
