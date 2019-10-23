#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define mx 1000
int main()
{
    FILE
    string a;

 while(cin>>a){
        if(a=="#") break;
         int arr[27]={0};
    for(int i=0;i<a.size();i++){
        arr[a[i]-'a']++;
    }

    vector<char>vh;
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2!=0)
        {
            cnt++;
           // cout<<arr[i]<<endl;
            char ch=i+'a';
          //  if(cnt!=2)
            vh.p_b(ch);
        }
    }
   // if(cnt==1)pr("\n");
    if(cnt>1){
    for(int i=0;i<vh.size()-1;i++)
        cout<<vh[i];
    }
    pr("\n");
}

}

