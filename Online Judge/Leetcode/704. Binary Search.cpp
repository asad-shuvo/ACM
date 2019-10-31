class Solution {
public:
    int search(vector<int>& nums, int target) {
        int b=0,end=nums.size()-1;
        while(b<=end){
            int mid=(b+(end-b)/2);
            if(nums[mid]==target)return mid;
            if(nums[mid]>target)end=mid-1;
            else b=mid+1;
        }
        return -1;
    }
};
