#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {

string a="hackerrank";
int plc=0;
string b="";
 for(int i=0;i<a.size();i++){
     for(int j=plc;j<s.size();j++){
         if(a[i]==s[j]){
             b+=s[j];
             plc=j+1;
             break;
         }
     }
 }
 if(b==a)return "YES";
 else return "NO";
//  (b==a)?return "YES":"NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

