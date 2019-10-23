#include <bits/stdc++.h>
using namespace std;
#define mx 100000
int main()
{
   string b,c,d,e,f,g;
   char a[100];
   //vector<string>v1,v2;
   map<string,string>mp;
   map<string,int>mp2;
   //map<string,int>mp2;
   int i,j,k,l;
   while(gets(a)){
        if(strlen(a)==0)
        break;
    stringstream ss(a);
    ss>>d;
    ss>>e;
   mp[e]=d;
   mp2[e]++;
    }
    while(getline(cin,g)){
            if(mp2[g]>0)
                cout<<mp[g]<<endl;
            else
                cout<<"eh"<<endl;
    }
   }

