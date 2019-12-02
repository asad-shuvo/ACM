#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
int len=s.size();
int n=s.size();
map<string,int>mp;
for (int i = 0; i < n; i++)  {
        for (int len = 1; len <= n - i; len++){ 
            string t=s.substr(i,len);
            sort(t.begin(), t.end());
            mp[t]++;
            // cout << s.substr(i, len) << endl; 
        }
}
int cnt=0;
for (int i = 0; i < n; i++)  {
        for (int len = 1; len <= n - i; len++){ 
             string t=s.substr(i,len);
            sort(t.begin(), t.end());
            // mp[t]++;
            if( mp[t]==-1){
                
            }
            else{
                int tmp= mp[t];
                //cout<<t<<" "<< s.substr(i,len)<<endl;
                cnt+=(tmp*(tmp-1))/2;
                 mp[t]=-1;
            }
            // mp[s.substr(i,len)]++;
            // cout << s.substr(i, len) << endl; 
        }
}
return cnt;
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

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

