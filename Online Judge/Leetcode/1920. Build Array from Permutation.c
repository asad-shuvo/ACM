class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        //with higher memory
        // vector<int> newArray;
        // for(int i=0;i<nums.size();i++){
        //     newArray.push_back(nums[nums[i]]);
        // }
        // return newArray;
        //with O(1) memory use
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]+((nums[nums[i]]%nums.size()) * nums.size());
        }
        for(int i=0;i<nums.size();i++){
            nums[i]/=nums.size();
        }
        return nums;

    }
};
