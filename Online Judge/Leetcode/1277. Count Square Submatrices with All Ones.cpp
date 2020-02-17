class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int x=matrix.size();
        int y=matrix[0].size();
        int table[x+5][y+5];
        for(int i=0;i<=x+1;i++){
            for(int j=0;j<=y+1;j++){
                table[i][j]=0;
            }
        }
        int cnt=0;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(matrix[i][j]==0){
                    table[i+1][j+1]=0;
                }
                else{
                    table[i+1][j+1]=min((min(table[i][j+1],table[i+1][j])),table[i][j])+1;
                    cnt+=table[i+1][j+1];
                }
            }
        }
        return cnt;
    }
};
