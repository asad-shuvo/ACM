#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
int alternate(string s) {
map<int,int>mp;
for(int i=0;i<s.size();i++){
    mp[s[i]-'a']++;
}
int Mx=0;
for(int i=0;i<26;i++){
    if(mp[i]>0){
        for(int j=0;j<26;j++){
            if(i!=j and mp[j]>0){
                  string tmp="";
                int f=0;
                for(int k=0;k<s.size();k++){
                    int t1=i;
                    int t2=j;
                    int t3=s[k]-'a';
                    if(t3==i or t3==j){
                        tmp+=s[k];
                        if(tmp.size()==1)continue;
                        if(tmp[tmp.size()-1]==tmp[tmp.size()-2]){
                            f=1;
                            break;
                        }
                    }
                }
                if(f==0){
                    // cout<<tmp.size()<<" "<<Mx<<endl;
                    if(tmp.size()>Mx)Mx=tmp.size();
                //    Mx=max(tmp.size(),Mx);
                }
               
            }
        }
    }
}
return Mx;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

