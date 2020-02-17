class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> >res;
        for(int i=0;i<numRows;i++){
            vector<int>tmp;
            for(int j=0;j<=i;j++){
                if(j==0 or j==i)tmp.push_back(1);
                else{
                    int val=res[i-1][j]+res[i-1][j-1];
                    tmp.push_back(val);
                }
            }
            res.push_back(tmp);
        }
        return res;
    }
};
