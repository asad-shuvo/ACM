class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR=nums[0];
        for(int i=1;i<nums.size();i++){
            XOR=XOR xor nums[i];
        }
        return XOR;
    }
};
