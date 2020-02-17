#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {

map<char,int>mp;
map<int,int>val;
for(int i=0;i<s.size();i++){
    if(i==0){
    mp[s[i]]++;
    int t=s[i]-'a'+1;
    int v=mp[s[i]]*t;
    cout<<v<<endl;
    val[v]=1;}
    else{
        if(s[i]!=s[i-1]){
            mp[s[i-1]]=0;
        }
         mp[s[i]]++;
    int t=s[i]-'a'+1;
    int v=mp[s[i]]*t;
    // cout<<v<<endl;
    val[v]=1;
    }
}
vector<string>a;
for(int i=0;i<queries.size();i++){
    if(val[queries[i]]==1){
        a.push_back("Yes");
    }
    else a.push_back("No");
}
return a;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

