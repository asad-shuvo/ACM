class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cnt=0;
        map<char,int>mp;
        for(int i=0;i<J.size();i++)mp[J[i]]++;
        for(int i=0;i<S.size();i++){
            if(mp[S[i]]>0)cnt++;
        }
        return cnt;
    }
};
