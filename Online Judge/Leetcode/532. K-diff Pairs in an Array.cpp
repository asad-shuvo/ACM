class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
       map<int,int>mp;
        vector<int>v;
         int cnt=0;
        for(int i=0;i<nums.size();i++){
               if(mp[nums[i]]==-1)continue;
            else if(mp[nums[i]]>0){
                cnt++;
                mp[nums[i]]=-1;
            }
            else if(mp[nums[i]]==0){
                v.push_back(nums[i]);
                mp[nums[i]]++;
            } 
        }
       
       if(k==0)return cnt;
        int i=0,j=0;
        if(v.size()<=1)return 0;
        else j++;
        int cn=0;
        while(i<v.size() and j<v.size()){
            if(v[j]-v[i]==k){
                i++;
                j++;
                cn++;
            }
            else if(v[j]-v[i]>k){
                i++;
                if(i==j)j++;
            }
            else if(v[j]-v[i]<k){
                j++;
            }
        }
        return cn;
    }
};
