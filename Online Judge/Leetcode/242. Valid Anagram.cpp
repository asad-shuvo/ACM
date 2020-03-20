class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0};
        int tt[26]={0};
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
            tt[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=tt[i])return 0;
        }
      
        return true;
        
    }
};
