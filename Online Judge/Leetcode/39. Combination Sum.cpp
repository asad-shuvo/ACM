class Solution {
public:
    vector<vector<int>>ret;
    map<vector<int>,int>mp;
    void G(vector<int>v,vector<int>& candidates,int target,int sum,int pos){
        v.push_back(candidates[pos]);
        sum+=candidates[pos];
        if(sum>target)return;
        if(sum==target){
            sort(v.begin(),v.end());
            if(mp[v]==0){
                mp[v]=1;
                ret.push_back(v);
            }
            return;
        }
        for(int i=0;i<candidates.size();i++){
             G(v,candidates,target,sum,i);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        for(int i=0;i<candidates.size();i++){
            vector<int>v;
            G(v,candidates,target,0,i);
        }
        return ret;
    }
};
