class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int b=-1,e=-1;
        for(int i=0;i<A.size();i++){
            if(A[i]<0){
                b++;
                e++;
                A[i]=abs(A[i]);
            }
            else {
                e++;
                break;
            }
        }
        if(e==b){
            b--;
        }
        vector<int>v;
        while(b>=0 and e<A.size()){
            
            if(A[b]<A[e]){
                v.push_back(A[b]);
                b--;
            }
            else{
                v.push_back(A[e]);
                e++;
            }
        }
        while(b>=0){
             v.push_back(A[b]);
                b--;
        }
        while( e<A.size()){
             v.push_back(A[e]);
                e++;
        }
        for(int i=0;i<v.size();i++)v[i]=v[i]*v[i];
        return v;
    }
};
