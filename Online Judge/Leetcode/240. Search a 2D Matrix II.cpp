class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)return 0;
        int m=matrix.size(),n=matrix[0].size();
        int row=0,col=n-1;
        while(row<m and col>=0){
            if(matrix[row][col]==target)return 1;
            else if(matrix[row][col]>target)col--;
            else row++;
        }
        return false;
    }
};
