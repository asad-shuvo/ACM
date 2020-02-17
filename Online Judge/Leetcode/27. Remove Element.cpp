class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int b=0,e=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                if(b==i){
                    b++;
                }
                else if(nums[b]==val){
                    swap(nums[b],nums[i]);
                    b++;
                }
            }
        }
        return b--;
    }
};
