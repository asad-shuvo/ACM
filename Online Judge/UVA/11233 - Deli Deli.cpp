#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l;
    string a[100],b[100],c,d;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int f,ln;
   for(i=0;i<m;i++){
    cin>>c;
    ln=c.size();
    f=0;
    for(j=0;j<n;j++){
        if(c==a[j])
        {
            f=1;
            d=b[j];
        }
    }
    if(f==1)
        cout<<d<<endl;
    else if(c[ln-1]=='y'){
            if(c[ln-2]=='a' || c[ln-2]=='e' || c[ln-2]=='i' || c[ln-2]=='o' || c[ln-2]=='u'){
                cout<<c<<"s"<<endl;
            }
            else{
                c.erase(c.begin()+ln-1);
                cout<<c<<"ies"<<endl;

            }

    }
    else if(c[ln-1]=='o' || c[ln-1]=='s' || c[ln-1]=='x' || (c[ln-1]=='h' && c[ln-2]=='c') || (c[ln-1]=='h' && c[ln-2]=='s'))
        cout<<c<<"es"<<endl;
    else
        cout<<c<<"s"<<endl;

    }
   }
