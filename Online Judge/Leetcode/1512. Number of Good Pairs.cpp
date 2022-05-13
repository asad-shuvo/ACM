class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int gp[101]={0},cnt = 0;
        for(int i=0;i<nums.size();i++){
            cnt+= gp[nums[i]];
            gp[nums[i]]++;
        }
        return cnt;
    }
};