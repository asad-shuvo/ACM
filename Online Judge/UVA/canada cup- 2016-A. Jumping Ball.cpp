#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int j,k,l,n,s=0;
    cin>>n>>a;
int    sum=0,t=0;
    if(a[0]=='<'){
    while(a[t]=='<'){
        sum++;
        t++;
    }
}
if(a[n-1]=='>'){
        t=n-1;
    while(a[t]=='>'){
        sum++;
        t--;
    }
}
cout<<sum<<endl;
}
