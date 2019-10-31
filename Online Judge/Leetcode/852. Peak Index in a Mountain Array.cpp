class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int plc;
        for(int i=1;i<A.size()-1;i++){
            if(A[i]>A[i-1] and A[i]>A[i+1]){
                plc=i;
                break;
            }
        }
        return plc;
    }
};
