#include <bits/stdc++.h>
using namespace std;
int main()
{
 //  freopen("input.txt","rt",stdin);
   // freopen("output.txt","w",stdout);

    double arr[100005];
    int i,j,k,l,n,t=0;
    scanf("%d",&n);
    getchar();
    getchar();
    while(n--){
            t++;
    if(t>1)
        cout<<endl;
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
          //v.push_back(*it.second);
            //cout<<(*it).first<<" "<<(*it).second<<endl;
        for(i=0;i<v.size();i++){
            sum+=v[i];
        }
        double db;
        for(i=0;i<v.size();i++){
             db=v[i]*100.0/sum;
            //v1.push_back(db);
            arr[k++]=db;
        }
        for(i=0;i<k;i++){
                cout<<v2[i]<<" ";
           printf("%.4lf\n",arr[i]);
        }
    }
}
