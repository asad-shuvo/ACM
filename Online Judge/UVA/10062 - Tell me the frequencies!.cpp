#include <bits/stdc++.h>
using namespace std;
int main()
{

  // freopen("input.txt","rt",stdin);
  // freopen("output.txt","w",stdout);
    string a;
    int i,j,k,l,T=0;

    while(getline(cin,a)){
        T++;
    if(T>1)
        cout<<endl;
            int arr[1000]={0};
    vector<int>v,v1;
    for(i=0;i<a.size();i++){
        arr[a[i]]++;
    }
        for(i=0;i<300;i++){
            if(arr[i]>0){
                    v1.push_back(i);
                v.push_back(arr[i]);
            }
        }
        for(i=0;i<v.size();i++){
            for(j=i+1;j<v.size();j++){
                if(v[j]<v[i]){
                    swap(v1[i],v1[j]);
                    swap(v[i],v[j]);
                }
                if(v[j]==v[i]){
                    if(v1[j]>v1[i]){
                        swap(v1[i],v1[j]);
                        swap(v[i],v[j]);
                    }
                }
            }
        }
        for(i=0;i<v.size();i++){
            cout<<v1[i]<<" "<<v[i]<<endl;
        }
        //return 0;
    }
}
