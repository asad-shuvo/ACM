class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int b=0,e=nums.size()-1;
        while(b<=e){
            int m=(b+(e-b)/2);
            if(nums[m]==target)return m;
            else if(nums[m]<target)b=m+1;
            else e=m-1;
        }
        return b;
    }
};
