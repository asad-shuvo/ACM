class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int f=1;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]>0){
                v.push_back(mp[arr[i]]);
                mp[arr[i]]=0;
            }
        }
        map<int,int>mp2;
        for(int i=0;i<v.size();i++){
            if(mp2[v[i]]==1){
                return false;
            }
            mp2[v[i]]=1;
        }
        return true;
    }
};
