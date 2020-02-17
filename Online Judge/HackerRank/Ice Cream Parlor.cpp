#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
struct st{
int val;
int index;
}a[10005];
// Complete the icecreamParlor function below.
bool comp(st a,st b){
return a.val<b.val;
}
vector<int> icecreamParlor(int m, vector<int> arr) {

for(int i=0;i<arr.size();i++){
    a[i].val=arr[i];
    a[i].index=i+1;
}
sort(a,a+arr.size(),comp);
// for(int i=0;i<arr.size();i++)cout<<a[i].val<<endl;
int i=0,j=arr.size()-1;
vector<int>r;

while(i<j){
if(a[i].val+a[j].val==m){
    r.push_back(a[i].index);
 r.push_back(a[j].index);
break;
}
else if(a[i].val+a[j].val>m){
    j--;
}
else i++;
}
sort(r.begin(),r.end());
return r;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int m;
        cin >> m;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split_string(arr_temp_temp);

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        vector<int> result = icecreamParlor(m, arr);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

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

