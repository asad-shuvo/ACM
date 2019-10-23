#include <bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define ll long long int
#define llu unsigned long long
#define file_input freopen("input.txt","rt",stdin);
#define file_output freopen("out.txt","wt",stdout);
int main()
{
    int n,m,i,j,k,l,arr[10000],test;
    cin>>test;
    while(test--){
    string b,c,d;
    char a;
    vector<char>v;
    sf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
           // cin>>a;
           cin>>a;
            v.push_back(a);
        sf("%d",&arr[i]);
    }
    //for(i=0;i<v.size();i++)
      //  cout<<v[i]<<" ";

    sf("%d",&m);
    double sum=0;
    getchar();
    while(m--){
        getline(cin,b);
    for(i=0;i<b.size();i++){
        for(j=0;j<v.size();j++){
            if(b[i]==v[j]){
                sum+=arr[j];
            }
        }
    }
    }
    sum=sum/100;
    printf("%.02lf$\n",sum);
    }
}





