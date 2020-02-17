class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<32;i++){
            int zeroes=0,one=0;
            for(int z=0;z<nums.size();z++){
                int tmp=1&(nums[z]);
                if(tmp==1)one++;
                else zeroes++;
                nums[z]>>=1;
            }
            cnt+=(zeroes*one);
        }
        return cnt;
    }
};
