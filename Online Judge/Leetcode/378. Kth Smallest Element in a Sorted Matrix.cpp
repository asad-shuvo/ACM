class Solution {
public:
    int fun(int t,vector<vector<int>>& matrix)
    {
        int i=matrix.size()-1;
        int j=0;
        int cnt=0;
        while(i>=0 and j<matrix.size()){
            if(matrix[i][j]<=t){
               cnt+=i+1;
                j++;
            }
            else i--;
        }
     //   cout<<t<<"  "<<cnt<<endl;
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int b=matrix[0][0];
        int sz=matrix.size();
        int e=matrix[sz-1][sz-1];
        while(b<e){
            int m=(b+(e-b)/2);
            int ret=fun(m,matrix);
            if(ret<k){
                b=m+1;
            }
            else e=m;
        }
        return e;
    }
};
