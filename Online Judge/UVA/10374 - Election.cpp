#include <bits/stdc++.h>
using namespace std;
#define file_input freopen("input.txt","rt",stdin);
#define file_output freopen("out.txt","wt",stdout);
int main()
{
  // file_input
    //file_output
    int i,j,k,l,m,n,z=0,test,te=0;
    cin>>test;
    int t=test;
    //cout<<endl;
   // cout<<endl;
    while(test--){
    map<string,string>mp;
    map<string,int>mp2;
    string a,b,c,g;
   scanf("%d\n",&n);
    vector<string>v1;
    vector<string>v3;
    vector<string>v4;
    vector<string>v5;
    vector<int>v2;
    vector<int>v6;
    while(n--){
    getline(cin,a);
    getline(cin,b);
    mp[a]=b;
    v3.push_back(a);
    v4.push_back(b);

    }
  //  cin>>m;
  //
    //getchar();
    scanf("%d\n",&m);
    int mx=0;
    while(m--){
        getline(cin,c);
        mp2[c]++;
      // if(mp2[c]>mx){
        //mx=mp2[c];
       }
       map<string,int>::iterator it;
       for(it=mp2.begin();it!=mp2.end();it++){
        v1.push_back((*it).first);
        v2.push_back((*it).second);
       }
       //for(i=0;i<v1.size();i++)
      //  cout<<v1[i]<< " "<<v2[i]<< endl<<" ";
        int f=0;
for(i=0;i<v1.size();i++){
     //   f=0;
    for(j=0;j<v3.size();j++){
        if(v1[i]==v3[j]){
         //   f=1;
         v5.push_back(v1[i]);
         v6.push_back(v2[i]);
        }
    }
    //if(f==0)
    //{
      //  v1.erase(v1.begin()+i);
        //v2.erase(v2.begin()+i);
    //}
}
//for(i=0;i<v5.size();i++)
  //  cout<<v5[i]<<" "<<v6[i];

    int maxx=0;
for(i=0;i<v6.size();i++){
    if(v6[i]>maxx){
        maxx=v6[i];
        g=v5[i];
    }
}
int cnt=0;
for(i=0;i<v6.size();i++){
    if(v2[i]==maxx)
        cnt++;
}
if(cnt==1){
    cout<<mp[g]<<endl;
}
else
    cout<<"tie"<<endl;
    if(z<t-1)
        cout<<endl;
    z++;
    }

    }

