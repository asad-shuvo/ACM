#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {

int cnt=1;
for(int i=0;i<s.size();i++){
    if(s[i]>='A' and s[i]<='Z'){
        cnt++;
    }
    
}
return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

