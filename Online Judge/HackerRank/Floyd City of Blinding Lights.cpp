#include <bits/stdc++.h>

using namespace std;
#define inf 999999
int main()
{
    int n,m;
    cin>>n>>m;
    int mat[n+5][m+5];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==j)mat[i][j]=0;
            else mat[i][j]=inf;
        }
    }
    for(int i=1;i<=m;i++){
        int x,y,r;
        cin>>x>>y>>r;
        mat[x][y]=r;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<mat[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        mat[x][y]==inf?cout<<"-1"<<endl:cout<<mat[x][y]<<endl;
    }
}
// vector<string> split_string(string);



// int main()
// {
//     int road_nodes;
//     int road_edges;

//     cin >> road_nodes >> road_edges;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     vector<int> road_from(road_edges);
//     vector<int> road_to(road_edges);
//     vector<int> road_weight(road_edges);

//     for (int i = 0; i < road_edges; i++) {
//         cin >> road_from[i] >> road_to[i] >> road_weight[i];
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//     }

//     int q;
//     cin >> q;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     for (int q_itr = 0; q_itr < q; q_itr++) {
//         string xy_temp;
//         getline(cin, xy_temp);

//         vector<string> xy = split_string(xy_temp);

//         int x = stoi(xy[0]);

//         int y = stoi(xy[1]);
//     }

//     return 0;
// }

// vector<string> split_string(string input_string) {
//     string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
//         return x == y and x == ' ';
//     });

//     input_string.erase(new_end, input_string.end());

//     while (input_string[input_string.length() - 1] == ' ') {
//         input_string.pop_back();
//     }

//     vector<string> splits;
//     char delimiter = ' ';

//     size_t i = 0;
//     size_t pos = input_string.find(delimiter);

//     while (pos != string::npos) {
//         splits.push_back(input_string.substr(i, pos - i));

//         i = pos + 1;
//         pos = input_string.find(delimiter, i);
//     }

//     splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

//     return splits;
// }

