#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,l,m,n;
    ///monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday".
    cin>>a>>b;
    int f=0;
    if(a=="saturday")
        k=1;if(a=="sunday")
        k=2;if(a=="monday")
        k=3;if(a=="tuesday")
        k=4;if(a=="wednesday")
        k=5;if(a=="thursday")
        k=6;if(a=="friday")
        k=7;
        if(b=="saturday")
        l=1;if(b=="sunday")
        l=2;if(b=="monday")
        l=3;if(b=="tuesday")
        l=4;if(b=="wednesday")
        l=5;if(b=="thursday")
        l=6;if(b=="friday")
        l=7;
    if(k==7){
        if(l==2 || l==3 || l==7){
            cout<<"YES"<<endl;
            f=1;
        }
    }
    else if(k==6){
        if(l== 1 || l==2 || l==6){
            cout<<"YES"<<endl;
            f=1;
        }
    } else if(k==5){
        if(l==7 || l==1 || l==5){
            cout<<"YES"<<endl;
            f=1;
        }
    } else if(k==4){
        if(l==6 || l==7 || l==4){
            cout<<"YES"<<endl;
            f=1;
        }
    } else if(k==3){
        if(l==5 || l==6 || l==3){
            cout<<"YES"<<endl;
            f=1;
        }
    } else if(k==2){
        if(l==4 || l==5 || l==2){
            cout<<"YES"<<endl;
            f=1;
        }
    } else if(k==1){
        if(l==3 || l==4 || l==1){
            cout<<"YES"<<endl;
            f=1;
        }
    }
    if(f==0)
        cout<<"NO"<<endl;
}
