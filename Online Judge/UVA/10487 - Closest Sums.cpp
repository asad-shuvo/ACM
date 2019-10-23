#include <bits/stdc++.h>
#define file_input freopen("input.txt","rt",stdin);
#define file_output freopen("output.txt","wt",stdout);
using namespace std;
int main()
{
    //file_input
    //file_output
    int i,j,k,l,m,n,arr[100000];
    int te=0;
    while(scanf("%d",&n) && n>0){
    vector<int>v;
    printf("Case %d:\n",++te);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]!=arr[j]){
    int            sum=arr[i]+arr[j];
                v.push_back(sum);
            }
        }
    }
   // for(i=0;i<v.size();i++)
     //   cout<<v[i]<<" ";

    scanf("%d",&m);
    int mn=1000000000;
    for(i=0;i<m;i++){
            int q,p;
        scanf("%d",&q);
        for(j=0;j<v.size();j++){
            int s=abs(q-v[j]);
            //cout<<"s="<<s<<endl;

            if(s<mn){
                mn=s;
                p=v[j];
            }
        }
        printf("Closest sum to %d is %d.\n",q,p);
        mn=1000000000;
    }
}
}
