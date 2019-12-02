#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
int cnt=0;
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int i=0,j=0;
while(i<a.size() and j<b.size()){
    if(a[i]==b[j]){
        cnt+=2;
        i++;
        j++;
    }
    else if(a[i]<b[j]){
        i++;
    }
    else j++;
}
return (a.size()+b.size())-cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

