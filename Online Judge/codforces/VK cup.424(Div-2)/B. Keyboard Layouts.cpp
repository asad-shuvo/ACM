#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100005

/*
ll status[mx];
void sieve(){
   long long int  i,j;
    for(i=2;i<=mx;i++)
    {
        status[i]=0;
    }
    for( i=2;i<=sqrt(mx);i++){
        if(status[i]==0)
        {
            for(j=i*i;j<=mx;j+=i){
                status[j]=1;
            }
        }
    }
}*/
#define dd double
#define sc scanf
#define pr printf
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VLL vector<long long int>
#define FILE freopen("input.txt","rt",stdin); freopen("output.txt","w",stdout);
#define p_b push_back
#define FOR(i,a,b) for(i=a;i<=b;i++)
int main()
{
    string A,B,Add;
    cin>>A>>B;
    map<char,char>mp;
    for(int i=0;i<A.size();i++){
        mp[A[i]]=B[i];
    }
    string D;
    cin>>D;
    for(int i=0;i<D.size();i++){
//        char s=D[i];
       // cout<<s<<endl;
       // if(s=='0' || s=='1' || s=='2' ||s=='3' ||s=='4' ||s=='5' ||s=='6' ||s=='7' ||s=='8' ||s=='9'){
              if(D[i]>='0' && D[i]<='9'){
               cout<<D[i];
  //              Add=Add+D[i];
              }
        else if(D[i]>='A' && D[i]<='Z')
        {
            char s1=(D[i]-'A')+'a';
            char s2=mp[s1];
            D[i]=(s2-'a')+'A';
        //Add+=s;
        cout<<D[i];
        }
        else
        {
            //char s1=mp[s];
            D[i]=mp[D[i]];
            cout<<D[i];
            //Add+=s;
        }
    }
   cout<<Add<<endl;
}

