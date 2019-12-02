#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {
long cnt=0;
int i=0;
long same[n]={0};
while(i<n){
int sc=1;
int j=i+1;
while(s[i]==s[j] and j<n){
    j++,sc++;
}
same[i]=sc;
cnt+=(sc*(sc+1)/2);
i=j;
}
for(int j=1;j<n;j++){
if(s[j]==s[j-1]){
same[j]=same[j-1];
}
if(j>0 and j<n-1 and (s[j-1]==s[j+1] and s[j]!=s[j-1])){
    cnt+=min(same[j-1],same[j+1]);
}
}
return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

