#include <bits/stdc++.h>
using namespace std;
int main()
{
      freopen("input.txt","rt",stdin);
      freopen("output.txt","w",stdout);

   long long int n,h,td,t,i,j,k,l,te=0,m,test,nw;
    scanf("%lld",&test);

    while(test--){
            vector<long long int>v;
            te++;
            k=0;
    scanf("%lld%lld%lld%lld",&n,&h,&t,&td);
    nw=n;
    for(i=0;i<n;i++){
        scanf("%lld",&m);
        v.push_back(m);
    }
    //cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    for(i=v.size();i>=0;i--){
        for(j=0;j<v.size();j++){
                if(v[i]>=0 && v[j]>=0){
            if(i!=j && v[i]+v[j]<h){
                k++;
                v[i]=-1;
                v[j]=-1;
               // v.erase(v.begin()+i);
                //v.erase(v.begin()+j);
            }
        }
    }
    }
    //n=n-2*k;
    nw=nw-2*k;
    long long int time=k*td+nw*t;
    printf("Case %lld: %lld\n",te,time);
    //v.clear();
    }
    return 0;
    /*
    for(i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    */
    //cout<<k<<endl;
}

