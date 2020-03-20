#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {

string a="";
int m=s.size();
while(1){
for(int i=0;i<s.size();i++){
    if(i==s.size()-1)a+=s[i];
    else{
        if(s[i]==s[i+1]){
            i++;
        }
        else{
            a+=s[i];
        }
    }
}
s=a;
a="";
cout<<m<<" "<<s.size()<<endl;
if(s.size()==m)break;
else m=s.size();
}
if(s.size()==0)s="Empty String";
return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

