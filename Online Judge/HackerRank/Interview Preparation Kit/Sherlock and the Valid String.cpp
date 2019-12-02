#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

map<int,int>mp;
for(int i=0;i<s.size();i++){
    mp[s[i]-'a']++;
}
vector<int>v;
for(int i=0;i<26;i++){
if(mp[i]>0){
v.push_back(mp[i]);
}
}
sort(v.begin(),v.end());

// if(v.size()==1)return "YES";
int f=0;
int cnt=0;
if(v.size()>=2){
    for(int i=1;i<v.size()-2;i++){
    
if(v[i]!=v[i+1]){
     f=1;
}
}
if(v[v.size()-1]!=v[v.size()-2]){
    cnt++;
if(v[v.size()-1]-v[v.size()-2]!=1){
    f=1;
}
}
if(v[0]!=v[1]){
    cnt++;
    if(v[0]!=1)f=1;
    if(v.size()==2){
        if(v[1]-v[0]==1){
            f=0;
        }
    }
}
}


if(f==0 and cnt<2)return "YES";
else return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

