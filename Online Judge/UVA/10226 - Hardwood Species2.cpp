#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","rt",stdin);

    double arr[1000];
    int i,j,k,l,n;
    scanf("%d",&n);
    getchar();
    //getchar();
    while(n--){
           map<string,int>m;
    vector<double>v;
    vector<string>v2;
    string name;
    string a;
    k=0;
    while(getline(cin,name) && name!=""){
        m[name]++;
    }
    double sum=0;
        map<string,int>::iterator it;
        for(it=m.begin();it!=m.end();it++){

            v.push_back((*it).second);
            v2.push_back((*it).first);
                //cout<<(*it).first<<" "<<(*it).second<<endl;
        }
        for(i=0;i<v2.size();i++)
            cout<<v2[i]<<" "<<v[i]<<endl;

    }
}
