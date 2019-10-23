#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);
    string a;
    long long int i,j,k,l,m,n,value;
    scanf("%d",&n);
    while(n--){
        value=0;
        cin>>m>>a;
        for(i=0;i<a.size();i++){
            value=(value*10+a[i]-'0')%m;
        }
        cout<<value<<endl;

    }
}
