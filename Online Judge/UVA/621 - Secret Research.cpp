#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l,m,n,test;
    cin>>test;
    while(test--){
    cin>>a;
    int ln=a.size();
    if(a=="1" || a=="4" || a=="78")
        cout<<"+"<<endl;
    else if(a[ln-1]=='5' && a[ln-2]=='3'){
                    if(ln==3)
                    {
                        if(a[0]==1 || a[0]==4)
                             cout<<"-"<<endl;
                    }
                  else if(ln==4)
                  {
                      if(a[0]=='7' && a[1]=='8')
                         cout<<"-"<<endl;
                  }
    }
    else if(a[0]=='9' && a[ln-1]=='4'){
        if(ln==3){
            if(a[1]=='1' || a[1]=='4')
            {
                cout<<"*"<<endl;
            }
        }
        else if(ln==4)
        {
            if(a[1]=='7' && a[2]=='8')
                cout<<"*"<<endl;
        }
    }
    else if(a[0]=='1' && a[1]=='9' && a[2]=='0'){
        if(ln==4){
            if(a[3]=='1' || a[3]=='4')
                cout<<"?"<<endl;
        }
        else if(ln==5)
        {
            if(a[3]=='7' && a[4]=='8')
                cout<<"?"<<endl;
        }
    }
    }
    return 0;
}
