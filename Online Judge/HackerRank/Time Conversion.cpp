#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     string r="";
if(s[s.size()-2]=='A'){
    if(s[0]=='1' and s[1]=='2'){
        s[0]='0';
        s[1]='0';
    }
    for(int i=0;i<s.size()-2;i++)r+=s[i];
}
else{
    if(s[0]=='1' and s[1]=='2'){
       r+=s[0];
       r+=s[1];
    }
    else{
        int t1=s[0]-'0';
        int t2=s[1]-'0';
        int t=10*t1+t2;
        t=12+t;
        string z=to_string(t);
         r+=z;
    }
   
    for(int i=2;i<s.size()-2;i++)r+=s[i];
}
return r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

