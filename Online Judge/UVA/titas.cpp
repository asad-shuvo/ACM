#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,test,te=0;
    cin>>test;
    while(test--){
    cin>>t;
    //getchar();
    map<string,int>m;
    vector<string>v1;
    vector<int>v2;
    string name;
//    int i;
    for(i=0;i<t;i++){
        cin>>name;
       // getline(cin,name);
        m[name]++;
    }
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        v1.push_back((*it).first);
        v2.push_back((*it).second);
            //sort(*it.begin())
        //cout<<(*it).first<<" "<<(*it).second<<endl;
        //cout<<(*it).second<<endl;
    }
    for(i=0;i<v2.size()-1;i++){
        for(j=i+1;j<v2.size();j++){
            if(v2[i]<v2[j]){
                swap(v2[i],v2[j]);
                swap(v1[i],v1[j]);
            }
        }
    }
    printf("Case %d: ",++te);
    cout<<v1[0]<<endl;
    }
return 0;
}

