#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b){
    int i,j,k,l,m,n,t=0,sum=0;
    for(i=0;i<a.size();i++){
        for(j=t;j<b.size();j++){
            t++;
            if(a[i]==b[j]){
                sum++;
                break;
            }
        }
    }
    if(sum==a.size())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }
    return 0;
}
