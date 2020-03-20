class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       // cout<<matrix[0].size()<<endl;
        if(matrix.size()==0)return 0;
        if(matrix[0].size()==0 )return false;
        int m=matrix.size();int n=matrix[0].size();
        int b=0,e=m-1;
        while(b<=e){
            int mid=b+(e-b)/2;
            if(matrix[mid][0]<=target and matrix[mid][n-1]>=target){
                int bb=0,ee=n-1;
                while(bb<=ee){
                    int mm=bb+(ee-bb)/2;
                    if(matrix[mid][mm]==target)return 1;
                    else if(matrix[mid][mm]>target)ee=mm-1;
                    else bb=mm+1;
                }
                return 0;
            }
            else if(matrix[mid][0]<=target){
                if(matrix[mid][n-1]<target){
                    b=mid+1;
                }
            }
            else e=mid-1;
        }
        return 0;
    }
};
