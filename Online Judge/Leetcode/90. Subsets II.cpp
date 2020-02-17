// class Solution {
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
//     }
// };
class Solution {
public:
    vector<vector<int> >ans;
    map<vector<int>,int>mp;
        vector<int>tmp;
    int mx;
   void G(vector<int>v,int val,int indx){
        if(v.size()==mx)return;
        v.push_back(val);
       sort(v.begin(),v.end());
       if(mp[v]==0){
           mp[v]=1;
           ans.push_back(v);
       }
        
        for(int i=indx+1;i<mx;i++){
            G(v,tmp[i],i);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        mx=nums.size();
        tmp=nums;
        vector<int>v;
        ans.push_back(v);
        for(int i=0;i<nums.size();i++)
        G(v,nums[i],i);
        return ans;
    }
};
