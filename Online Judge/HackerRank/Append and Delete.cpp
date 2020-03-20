#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
if(k>=(s.size()+t.size()))return "Yes";
int cnt=-1;
for(int i=0;i<t.size() and i<s.size();i++){
if(t[i]!=s[i]){
    cnt=i;
    break;
}

}
if(cnt==-1){
    if(t.size()==s.size()){
        if(k%2==0)return "Yes";
        else{
            if(k>(t.size()*2))return "Yes";
         return "No";
        }
    }
else{
    if(s.size()>t.size()){
        int sz=s.size()-t.size();
      //  cout<<sz<<endl;
         cout<<k<<endl;
         k=k-sz;
      //  cout<<k<<endl;
        if(k<0 or (k%2==1 and k<(t.size()*2)))return "No";
        else return "Yes";
    }
    else{
        int sz=t.size()-s.size();
         k=k-sz;
        if(k<0 or (k%2==1 and k<(t.size()*2)))return "No";
        else return "Yes";
    }
}
}
else{
    int sz=s.size()-(cnt);
    k-=sz;
     cout<<"sz"<<sz<<endl;
     sz=t.size()-cnt;
    if(sz>k)return "No";
    else {
        int t1=k-sz;
        // if(t==k)
        if(t1%2==0)
        return "Yes";
         else {
            if(k>(t.size()*2))return "Yes";
            return "No";
        }
    
    }
}
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

