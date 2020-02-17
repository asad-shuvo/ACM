#include <bits/stdc++.h>

using namespace std;

// Complete the counterGame function below.
bool chkp(unsigned int x){
    return x && (!(x&(x-1)));
}
unsigned int chk(unsigned int n){
    int cnt=0;
    while(n!=0){
        cnt++;
        n/=2;
    }
    return 1<<(cnt-1);
}
string counterGame(long n) {
    if(n==1)return "Richard";
int cnt=0;
while (n != 1)
        {
            int len=0;
            unsigned long long tmp=n;
            while(tmp!=0)tmp/=2,len++;
            unsigned long long a=(unsigned long long)1<<(len-1);
            if(n==a)n/=2;
            else n-=a;
            cnt++;
        }

if(cnt%2==1)return "Louise";
else return "Richard";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = counterGame(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

