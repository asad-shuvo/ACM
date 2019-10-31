class Solution {
public:
    int fun(int target,vector<int>& A){
        int M=INT_MAX;
        int b=0,e=A.size()-1;
        while(b<=e){
            int m=(b+e)/2;
            M=min(M,(abs(A[m]-target)));
             M=min(M,(abs(A[e]-target)));
             M=min(M,(abs(A[b]-target)));
            if(A[m]==target)return 0;
            else if(A[m]<target){             
                b=m+1;
   }
            else {
               
                e=m-1;
                 
                 }
        }
  
        return M;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
       sort(heaters.begin(),heaters.end());
        int M=0;
        for(int i=0;i<houses.size();i++){
            int tmp=houses[i];
            int ret=fun(tmp,heaters);
            M=max(M,ret);
        }
        return M;
    }
};
