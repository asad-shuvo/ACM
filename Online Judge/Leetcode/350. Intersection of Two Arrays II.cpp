class Solution {
public:
    int fun(int t,vector<int> nums,int b){
        int e=nums.size()-1;
        int pl=-1;
        while(b<=e){
            int m=(b+(e-b)/2);
            if(nums[m]==t){
                pl=m;
                e=m-1;
            }
            else if(nums[m]>t){
                e=m-1;
            }
            else b=m+1;
        }
     //   cout<<pl<<endl;
        return pl;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>r;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int b=0;
        for(int i=0;i<nums1.size();i++){
            int tmp=nums1[i];
            int ret=fun(tmp,nums2,b);
            if(ret!=-1){
                b=ret+1;
                r.push_back(tmp);
                if(b==nums2.size())break;
                
            }
        }
        return r;
    }
};
