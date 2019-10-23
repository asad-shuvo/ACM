#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m;
    map<int,int>mp;
    vector<int>v,v1;
    while(scanf("%d",&l)!=EOF){
            if(mp[l]==0){
        mp[l]=1;
        v.push_back(l);
            }
            else
                mp[l]++;
    }
       for(i=0;i<v.size();i++)
       {
           cout<<v[i]<<" "<<mp[v[i]]<<endl;
       }

}
