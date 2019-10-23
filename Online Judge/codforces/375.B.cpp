#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    vector<string>v1,v2,v3;
    vector<int>v;
    int i,j,k,l,m,n;
    cin>>n;
    getchar();
    getline(cin,a);
    b=a;
    int mx=0;
int    cnt=0;
 int cnt1=0,cnt2=0;

    for(i=0;i<a.size();i++){

               if(a[i]=='('){
            for(j=i+1; ;j++){
                i++;
                   // if(a[j]==')')
                   // break;
                if((a[j]>='a' && a[j]<='z') || (a[j]>='A' && a[j]<='Z'))
                {
                    cnt1++;
                }
                if((a[j]=='_' || a[j]==')') && cnt1!=0)
                {
                    cnt2++;
                    cnt1=0;
                }
            if(a[j]==')')
                break;
            }
           }

        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                cnt++;
               // cout<<a[i]<<endl;
                //cout<<cnt<<endl;
        }
        if((a[i]=='_' || a[i]=='('  || a[i]==')' || i==a.size()-1) && cnt!=0){
            if(cnt>mx)
            mx=cnt;
           // v.push_back(cnt);
            cnt=0;
           }
    }
   // cout<<mx<<endl;


    cout<<mx<<" "<<cnt2<<endl;

}

