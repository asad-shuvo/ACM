#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {

for(int i=1;i<=n;i++){
    int t=n-i+1;
    for(int j=1;j<=n;j++){
        if(j<t)printf(" ");
        else cout<<"#";
    }
    cout<<endl;
}
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
