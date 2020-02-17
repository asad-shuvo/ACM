class Solution {
public:
    vector<int> getRow(int rowIndex) {
     vector<int>res;
        int prev;
        int n=rowIndex+1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==i){res.push_back(1);prev=1;}
                else{
                    if(j==0)continue;
                    else{
                        int tm=res[j];
                        res[j]=prev+res[j];
                        prev=tm;
                    }
                }
            }
        }
        return res;
    }
};
