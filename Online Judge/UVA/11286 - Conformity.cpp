#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);

int main()
{
   int n,i;
   int arr[1000]={0};
   //map<int,int>mp;
   sc("%d",&n);
   while(n--){
        int p=5;
    while(p--){
        int a;
    sc("%d",&a);
    arr[a]++;
    }
   }
   vector<int>v;
   for(int i=100;i<=500;i++){
    if(arr[i]>0)
    cout<<arr[i]<<" ";
        v.push_back(arr[i]);
   }
   sort(v.begin(),v.end());
   //for(i=0;i<5;i++){
   //cout<<v[i]<<" ";
   //}
   //cout<<v[v.size()-5]<<endl;
}

