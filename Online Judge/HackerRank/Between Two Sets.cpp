#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
map<int,int>mp;
vector<int>v;
// mp[1]=1;

for(int i=0;i<b.size();i++){
for(int j=1;j<=sqrt(b[i]);j++){
if(b[i]%j==0){
    if(mp[j]==0){
        v.push_back(j);
        mp[j]=1;
    }
    if(mp[b[i]/j]==0){
        mp[b[i]/j]=1;
        v.push_back(b[i]/j);
    }
}
}
}
vector<int>v2;
for(int i=0;i<v.size();i++){
    int f=0;
    for(int j=0;j<b.size();j++){
        if(b[j]%v[i]!=0){
            f=1;
        }
    }
    if(f==0)v2.push_back(v[i]);
}
int f=0,cnt=0;
for(int i=0;i<v2.size();i++){
    // cout<<v2[i]<<endl;
    f=0;
    for(int j=0;j<a.size();j++){
        if(v2[i]%a[j]!=0){
            f=1;
            break;
        }
    }
    if(f==0){
       cnt++;}
}
return cnt;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

