class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int M=INT_MIN;
        for(int i=0;i<nums.size();i++)M=max(M,nums[i]);
        int M1=INT_MIN;
        int f=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=M1 and nums[i]!=M){
                M1=nums[i];
                f=1;
            }
        }
        if(f==0)return M;
        f=0;
        int M2=INT_MIN;
          for(int i=0;i<nums.size();i++){
            if(nums[i]>=M2 and nums[i]!=M and nums[i]!=M1){
                M2=nums[i];
            f=1;
            }
        }
        if(f==0)return M;
        return M2;
    }
};
