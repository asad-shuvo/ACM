#include <bits/stdc++.h>

using namespace std;

// Complete the powerSum function below.
int total=0;
int rec(int val,int x,int k,int n){
if(x==0)total++;
int r=(int)floor(pow(val,1.0/n));
for(int i=k+1;i<=r;i++){
int t=x-(int)pow(i,n);
if(t>=0){
    rec(val,x-(int)pow(i,n),i,n);
}
}
return total;
}
int powerSum(int X, int N) {
int ret=rec(X,X,0,N);
return ret;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int X;
    cin >> X;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

    return 0;
}

