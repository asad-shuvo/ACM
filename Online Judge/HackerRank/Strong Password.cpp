#include <bits/stdc++.h>

using namespace std;
bool spc(char c){
    string a="!@#$%^&*()-+";
    for(int i=0;i<a.size();i++){
        if(a[i]==c)return 1;
    }
    return 0;

}
// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
int d=0,B=0,c=0,sc=0;
for(int i=0;i<n;i++){
    if(password[i]>='0' and password[i]<='9'){
        d=1;
    }
    else if(password[i]>='A' and password[i]<='Z'){
        B=1;
    }
     else if(password[i]>='a' and password[i]<='z'){
        c=1;
    }
    else if(spc(password[i])){
        sc=1;
    }
}
int cnt=0;
if(d==0)cnt++;
if(B==0)cnt++;
if(c==0)cnt++;
if(sc==0)cnt++;
int tmp=cnt+n;
int t1=0;
if(tmp<6)t1+=(6-tmp);
cnt+=t1;
// cout<<cnt<<endl;
// if(cnt<6)cnt=(6-cnt);
return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

