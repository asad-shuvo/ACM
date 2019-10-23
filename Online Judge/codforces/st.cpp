#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    string a,b,c;
    set<string>v1,v2,v3;
    set<string>::iterator it;
    cin>>m>>n;
    while(m--){
        cin>>a;
        v1.push_back(a);
    }
    cin>>b;
    //sort(v1.begin(),v1.end());
    for(i=0;i<v1.size();i++){
        if(v1[i].size()<=b.size())
        {
            v2.insert(v1[i]);
        }
        else
            break;
    }
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    v3=v2;
    int p;
    for(i=0;i<v2.size();i++){
        if(v2[i].size()==b.size()){
               // v2.erase(v2.begin()+i);
            //v2.insert(i,b);
          //  v2[i]=b;
          p=i+1;
          cout<<v2[i];
          cout<<p;
            break;
        }

    }
    //cout<<p<<endl<<v2[p]<<endl;
    int p2,f=0;
    for(i=0;i<v2.size();i++){
        if(v2[i].size()>b.size()){
            p2=i;
            f=1;
            break;

        }
    }
    //cout<<p;
    /*
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";*/
        if(f==0)
            p2=v2.size();
        int cnt1=0,cnt2=0,t=0;
    for(i=1;i<=p;i++){
            t++;
        if(t==n){
            cnt1+=5;
            t=0;
        }
        else
            cnt1++;
    }
    int t1=0;
    for(i=1;i<=p2;i++){
        t1++;
        if(t1==n)
        {
            cnt2+=5;
            t1=0;
        }
        else
            cnt2++;
    }
    cout<<cnt1<<" "<<cnt2<<endl;
}
