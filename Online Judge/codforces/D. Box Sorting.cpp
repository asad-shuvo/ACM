#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    unsigned long long i,j,k,l,m,n,test,te=0;
    cin>>test;
    while(test--){
    cin>>n;
    set<unsigned long long>s;
    for(i=0;i<n;i++){
        scanf("%d",&k);
        s.insert(k);
    }
    l=s.size();
    m=n-l;
    printf("Case %llu: %llu\n",++te,m+1);
    s.clear();
    }
    ///1073741824

}
