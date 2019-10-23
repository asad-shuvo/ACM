#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    int i,j,k,l,cnt,p;
    string a;
    //getline(cin,a);
    //stringstream ss(a);
    while(scanf("%d",&k)!=EOF){
        v1.push_back(k);
    }
    //while(ss>>p){
      //  v1.push_back(p);
    //}
    //for(i=0;i<v1.size();i++)
        //cout<<v1[i]<<endl;
       // int siz=v1.size();
       cnt=1;
    for(i=0;i<v1.size();i++){
           // cnt=1;
        for(j=i+1;j<v1.size();j++){
            if(v1[i]==v1[j]){
 v1.erase(v1.begin()+j);
                cnt++;

            }
        }
    cout<<v1[i]<<" "<<cnt<<endl;
    cnt=1;
    }
}
