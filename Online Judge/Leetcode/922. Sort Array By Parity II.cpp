class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
      vector<int>ret;
        int o=0,e=0,cnt=0;
        for(int i=0;i<A.size();i++){
            if(cnt%2==0){
                while(A[e]%2!=0){
                    e++;
                }
                ret.push_back(A[e]);
                e++;
            }
            else{
                 while(A[o]%2==0){
                    o++;
                }
                
                ret.push_back(A[o]);
                o++;
            }
            cnt++;
        }
        return ret;
    }
};
