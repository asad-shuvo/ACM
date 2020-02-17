#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {

 map<char,int>mp;
//  s=tolower(s);
int cnt=0;
for(int i=0;i<s.size();i++){
    if(s[i]==' ')continue;
    char c=tolower(s[i]);
    
    if(mp[c]==0){
        // cout<<c<<endl;
        mp[c]=1;
        cnt++;
    }
}
if(cnt==26)return "pangram";
else return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

