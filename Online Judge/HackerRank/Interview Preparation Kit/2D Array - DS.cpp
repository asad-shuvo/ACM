#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

int M=INT_MIN;

for(int i=0;i<arr.size()-2;i++){
    for(int j=0;j<arr[i].size()-2;j++){
        int cnt=0;
        for(int z=j;z<=j+2;z++){
            cnt+=arr[i][z];
        }
        cnt+=arr[i+1][j+1];

        for(int z=j;z<=j+2;z++){
            cnt+=arr[i+2][z];
        }
        M=max(M,cnt);
    }
   
}
return M;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

