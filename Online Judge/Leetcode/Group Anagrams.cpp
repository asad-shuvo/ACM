class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int>mp;
        vector<string>ret[50000];
        int cnt=0;
        for(int i=0;i<strs.size();i++){
           string a=strs[i];
            sort(a.begin(),a.end());
            if(mp[a]==0){
                cnt++;
                mp[a]=cnt;
            }
            ret[mp[a]-1].push_back(strs[i]);
        }
        vector<vector<string>>r;
        for(int i=0;i<cnt;i++){
            vector<string>vv;
            for(int j=0;j<ret[i].size();j++){
                
               vv.push_back(ret[i][j]);
            }
            r.push_back(vv);
            // cout<<endl;
        }
        
        return r;
    }
};
