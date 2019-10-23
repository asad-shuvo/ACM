#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a){
            if(a=="0")
            break;
    int i,j,k,l,m=1,n,v,p=0,sum=0;
    int value=0;
    for(i=0;i<a.size();i++){
            sum+=a[i]-'0';
        value=value*10+a[i]-'0';
        value=value%9;
    }
    int cnt,ln;
    //cout<<sum<<endl;
    if(value==0)
        {
            cnt=1;
            while(sum>9){
            cnt++;
            ln=0;
            while(sum>0){
                ln+=sum%10;
                sum/=10;
            }
            sum=ln;
            }
            cout<<a<<" is a multiple of 9 and has 9-degree "<<cnt<<"."<<endl;

        }
        else
            cout<<a<<" is not a multiple of 9."<<endl;
}
return 0;
}
