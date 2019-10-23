#include <bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("input.txt","rt",stdin);
    string  str,a;
    string ab;
    int i,j,l,m,n,mx=0,ln,f;
    while(cin>>str){
            f=1;
    int k=1;
            if(str=="E-N-D"){
                break;
            }
            stringstream ss(str);
    while(ss>>a){
            for(l=0;l<a.size();l++){
                if((a[l]>='a' && a[l]<='z') ||(a[l]>='A' && a[l]<='Z') || a[l]=='-' )
                   f=1;
                   else{
                    a.erase(a.begin()+l);
                   }
            }
            if(a.size()>mx)
            {

            mx=a.size();
            ab=a;
            }
            //ln=strlen(a);
    }
    }
    for(i=0;i<mx;i++){
        if(ab[i]>='A' && ab[i]<='Z'){
            ab[i]=ab[i]-'A'+'a';
        }
    }
    cout<<ab<<endl;
}
