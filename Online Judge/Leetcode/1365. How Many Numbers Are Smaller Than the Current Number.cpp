class Solution {
public:
    struct node{
      int i,val;
        bool operator<(const node &p)const{
            return val<p.val;
        }
    };
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ret(nums.size());
        vector<node>v;
        for(int i=0;i<nums.size();i++){
            node t;
            t.i=i;
            t.val=nums[i];
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i==0){
                int ti=v[i].i;
                int tv=v[i].val;
                ret[ti]=0;
            }
            else{
                if(v[i].val!=v[i-1].val){
                    ret[v[i].i]=i;
                }
                else{
                    ret[v[i].i]=ret[v[i-1].i];
                }
            }
        }
        return ret;
    }
};
