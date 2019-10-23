#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int cnt=0;
    int cs[100005];
    int k=0;
    for(int i=1;i<a.size();i++){
        if(a[i-1]==a[i])
        {
            k++;
        }
                    cs[i+1]=k;

    }
 //   for(int i=0;i<a.size()-1;i++)
   //     cout<<cs[i]<<endl;

    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        //cout<<cs[x]<<endl;
        //cout<<cs[y]<<endl;
    cout<<cs[y]-cs[x]<<endl;
    }
}
