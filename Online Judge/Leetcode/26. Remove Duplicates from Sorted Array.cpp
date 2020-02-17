class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0,b=0;
        if(nums.size()==1 or nums.size()==0)return nums.size();
        for(auto i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                if(cnt==0){nums[b]=nums[i-1],nums[b+1]=nums[i];cnt+=2;b=2;}
                else {nums[b]=nums[i];b++;cnt++;}
            }
        }
        if(cnt==0)cnt=1;
        return cnt;
    }
};
