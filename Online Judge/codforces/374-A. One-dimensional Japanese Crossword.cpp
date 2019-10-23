#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int n,i,j,k,l;
    cin>>n;
    cin>>a;
    vector<int>v1,v2;
    int cnt=0,c=0;
    for(i=0;i<a.size();i++){
        if(a[i]=='B')
        {
            cnt++;
        }
        if((a[i]=='W' || i==a.size()-1) && cnt!=0){
            v1.push_back(cnt);
            c++;
            cnt=0;
        }
    }
    if(c!=0){
    cout<<c<<endl;
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    }
    else
        cout<<c<<endl;
}
