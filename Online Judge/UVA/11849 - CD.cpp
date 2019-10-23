#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,c=0,k,p,m,n,ans;
    while(scanf("%lld%lld",&m,&n)!=EOF){
            if(m==0 && n==0)
            break;
     set<long long int>arr;
    //set<long long int>a;
    for(i=0;i<m;i++){
        scanf("%lld",&k);
        arr.insert(k);
    }
     for(i=0;i<n;i++){
        scanf("%lld",&p);
        arr.insert(p);
    }
    ans=(m+n)-arr.size();
    cout<<ans<<endl;
  //cout<<arr.size();
   // printf("%lld\n",c);
    }
    return 0;
}
