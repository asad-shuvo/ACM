class Solution {
public:
    vector<int> partitionLabels(string S) {
     map<char,int>mp,mp2;
        vector<int>v;
        int b=0;
        int cnt=0;
        for(int i=0;i<S.size();i++){
            mp[S[i]]++;
        }
       set<char>st;
        for(int i=0;i<S.size();i++){
           st.insert(S[i]);
            mp2[S[i]]++;
            if(mp2[S[i]]==mp[S[i]] ){
                st.erase(S[i]);
                if(st.size()==0){
                v.push_back(i-b+1);
                b=i+1;
                }
            }
        }
        return v;
    }
};
