#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int i,j,k,l,m,n;
    scanf("%d%d",&n,&k);
    cin>>a;
    int f1=0,f2=0;
    for(i=0;i<a.size();i++){
        if(a[i]=='G'){
            l=i;
            f1=1;
            break;
        }
        if (a[i]=='T'){
            f2=1;
            break;
        }
    }
    if(f2==1){
        for(i=0;i<a.size();i++){
            if(a[i]=='G'){
                l=i;
                break;
            }
        }
    }
   // cout<<l<<endl;
    if(f1==1){
    for(i=l;i<a.size();i=(i+1)+(k-1)){
        if(a[i]=='T'){
     cout<<"YES"<<endl;
     break;
        }
     if(a[i]=='#'){
                cout<<"NO"<<endl;
                break;
     }
    }
    if(i>=n)
        cout<<"NO"<<endl;
    }
    if(f2==1){
        for(i=l;i>=0;i=(i-1)-(k-1))
        {
           // cout<<i<<endl;
             if(a[i]=='T'){
     cout<<"YES"<<endl;
     break;
        }
     if(a[i]=='#'){
                cout<<"NO"<<endl;
                break;
     }
        }
         if(i<0)
        cout<<"NO"<<endl;
    }

    //cout<<i<<endl;
}

