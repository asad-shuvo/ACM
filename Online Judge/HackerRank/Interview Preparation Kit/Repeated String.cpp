#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
long cnt=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='a')cnt++;
}
cout<<cnt<<endl;
long cn=0;
long sz=s.size();
cout<<sz<<" "<<n<<endl;
long tk=n/sz;
cout<<tk<<endl;
cnt*=tk;
tk=n%sz;
for(long i=0;i<tk;i++){
    if(s[i]=='a')cnt++;
}
//cout<<cnt<<endl;
return cnt;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

