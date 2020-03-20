class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int odd=0,ev=0;
        for(int i=0;i<nums.size();i++){
            int t=floor(log10(nums[i]))+1;
            if(t%2==0)ev++;
            // cout<<t<<endl;
        }
        return ev;
        // return 10;
    }
};
