#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {

int x=l^r;
int msbPos=0;
while(x){
    msbPos++;
    x>>=1;
}
int maxXor=0;
int two=1;
while(msbPos--){
    maxXor+=two;
    two<<=1;
}
return maxXor;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}

