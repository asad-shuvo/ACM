class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size() and j<nums.size()){
            // cout<<nums[i]<<" "<<nums[j]<<endl;
            if(nums[i]==0 and nums[j]!=0 and j>i){swap(nums[i],nums[j]);}
                                                 if(nums[i]==0 and nums[j]!=0 and (j<i)){
                                                     j++;
                                                   //  i++;
                                                 }
                                        // cout<<"E"<<endl<< " "<<nums[i]<<" "<<nums[j]<<endl;
                                        if(i>=nums.size() or j>=nums.size())break;
            if(nums[i]!=0){
                i++;
            }
          //  if(i>j)break;
            if(nums[j]==0){
                j++;
            }
            // cout<<nums[0]<< " "<<nums[1]<<endl;
            if(i>=nums.size() or j>=nums.size())break;
            
        }
        for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
    }
};
