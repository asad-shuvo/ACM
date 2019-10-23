#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll prime(ll a){
    ll p,q,r;
    ll sq=sqrt(a);
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else if(a%2==0)
        return 0;
        else{
            for(p=3;p<=sq;p=p+2){
                if(a%p==0)
                    return 0;
            }
        }
        return 1;
}
int main()
{
    ll n,m,i,j,k,l,test;
    scanf("%lld",&test);
    while(test--){
    vector<int>v1,v2,v3,v4,v5;
    map<int,int>mp;
    scanf("%lld%lld",&n,&m);
    for(i=n;i<=m;i++){
        if(prime(i)){
      v1.push_back(i);
        }
    }
    //for(i=0;i<v1.size();i++)
        //cout<<v1[i]<<" ";
    //cout<<endl;
    int mx=0;
    for(i=0,j=i+1;i<v1.size()-1,j<v1.size();i++,j++){
        ll p=v1[j]-v1[i];
        v2.push_back(p);
        mp[p]++;
       // mx=max(mx,mp[p]);
    }
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        v4.push_back((*it).first);
        v5.push_back((*it).second);

    }
   // for(i=0;i<v4.size();i++)
     //   cout<<v4[i]<<" "<<v5[i]<<endl;
    ll maxx=0,maxxx;
    for(i=0;i<v5.size();i++){
        if(v5[i]>maxx){
            maxx=v5[i];
            maxxx=v4[i];
        }
    }
    ll cnt=0;
    for(i=0;i<v5.size();i++){
        if(maxx==v5[i])
            cnt++;
    }
       // cout<<v4[i]<<" "<<v5[i];
       if(cnt==1)
    printf("The jumping champion is %lld\n",maxxx);
    else
        printf("No jumping champion\n");
    //cout<<mx<<endl;
}
}
