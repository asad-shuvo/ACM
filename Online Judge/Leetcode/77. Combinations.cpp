class Solution {
public:
    vector<vector<int>>ret;
    map<vector<int>,int>mp;
    int Set(int n,int pos){
        return n=n|(1<<pos);
    }
    bool chk(int n,int pos){
        return (bool)(n&(1<<pos));
    }
    void G(vector<int>v,int n,int k,int mask,int i){
        v.push_back(i);
        if(v.size()==k){
            ret.push_back(v);
            return;
        }
        for(int j=i;j<=n;j++){
            if(chk(mask,j)==0){
                G(v,n,k,Set(mask,j),j);
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        int mask=0;
        for(int i=1;i<=n;i++){
            vector<int>v;
            G(v,n,k,Set(mask,i),i);
        }
        return ret;
    }
};
