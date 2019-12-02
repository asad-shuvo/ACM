#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.

int mat[5005][5005];
int commonChild(string s1, string s2) {
    int m=s1.size();
    int n=s2.size();
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 or j==0){
                mat[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                mat[i][j]=mat[i-1][j-1]+1;
            }
            else{
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
            }
        }
    }
    return mat[m][n];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}

