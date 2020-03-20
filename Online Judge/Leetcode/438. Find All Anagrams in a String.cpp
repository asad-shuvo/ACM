class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int>mp1,mp2;
        for(int i=0;i<p.size();i++)mp1[p[i]]++;
        int b=0;
        vector<int>ret;
        int cnt=0;
        int sz=p.size();
        for(int i=0;i<sz;i++){
            if(mp1[s[i]]>0){
                mp2[s[i]]++;
                if(mp2[s[i]]<=mp1[s[i]]){
                    cnt++;
                }
            }
        }
        if(cnt==sz)ret.push_back(b);
        for(int i=sz;i<s.size();i++){
            if(mp1[s[b]]>0){
                mp2[s[b]]--;
                if(mp2[s[b]]<mp1[s[b]])
                cnt--;          
            }
      
         
             b++;
             if(mp1[s[i]]>0){
              
                 
                mp2[s[i]]++;
           
                if(mp2[s[i]]<=mp1[s[i]]){
                    cnt++;
                }
            }
            if(cnt==sz)
                ret.push_back(b);
        }
        return ret;
    }
};
