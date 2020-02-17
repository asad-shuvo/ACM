#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {

vector<int>v,r;
for(int i=0;i<scores.size();i++){
    if(i==0){
        v.push_back(scores[i]);
        continue;
    }
    if(scores[i]!=scores[i-1]){
        v.push_back(scores[i]);
    }
}
// for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
// cout<<endl;
for(int i=0;i<alice.size();i++){
int b=0,e=v.size()-1,f=0;
while(b<e){
    int mid=(b)+(e-b)/2;
    if(v[mid]==alice[i]){
        r.push_back(mid+1);
        f=1;
        break;
    }
    else if(v[mid]>alice[i]){
        b=mid+1;
    }
    else e=mid-1;
}
if(f==1)continue;
// cout<<b<<" "<<e<<endl;
if(v[b]==alice[i]){
    r.push_back(b+1);
}
else if(v[b]>alice[i]){
    r.push_back(b+2);
}
else r.push_back(b+1);
}
return r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int scores_count;
    cin >> scores_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string scores_temp_temp;
    getline(cin, scores_temp_temp);

    vector<string> scores_temp = split_string(scores_temp_temp);

    vector<int> scores(scores_count);

    for (int i = 0; i < scores_count; i++) {
        int scores_item = stoi(scores_temp[i]);

        scores[i] = scores_item;
    }

    int alice_count;
    cin >> alice_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string alice_temp_temp;
    getline(cin, alice_temp_temp);

    vector<string> alice_temp = split_string(alice_temp_temp);

    vector<int> alice(alice_count);

    for (int i = 0; i < alice_count; i++) {
        int alice_item = stoi(alice_temp[i]);

        alice[i] = alice_item;
    }

    vector<int> result = climbingLeaderboard(scores, alice);

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

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

