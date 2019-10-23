#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll l,r,k;
    vector<ll>v;
    cin>>l>>r>>k;
    int i=0,f=0;
    //while(1){
    for(i=0; ;i++){
        int t=pow(k,i);
      //  cout<<t<<endl;
        if(t>r)
            break;
        if(t>=l && t<=r)
        {

            cout<<t<<" ";

            f=1;
        }

    }
    if(f==0)
        cout<<"-1"<<endl;
}
