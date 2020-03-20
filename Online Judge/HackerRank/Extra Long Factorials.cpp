#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {

int sz=1;
int val[500];
val[0]=1;
for(int i=2;i<=n;i++){
    int carry=0;
    for(int j=0;j<sz;j++){
        int v=val[j]*i+carry;
        carry=v/10;
        val[j]=v%10;
    }
    while(carry){
        val[sz]=carry%10;
        carry/=10;
        sz++;
    }
}
for(int i=sz-1;i>=0;i--){
cout<<val[i];
}
cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}

