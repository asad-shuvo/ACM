class NumArray {
public:
    int cm[20000];
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
           cm[i+1]=nums[i]+cm[i];
        }
    }
    
    int sumRange(int i, int j) {
        return cm[j+1]-cm[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
