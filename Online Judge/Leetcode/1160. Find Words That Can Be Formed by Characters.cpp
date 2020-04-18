class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int cnt=0;
        map<char,int>mp;
        for(int i=0;i<chars.size();i++){
            mp[chars[i]]++;
        }
        for(int i=0;i<words.size();i++){
            map<char,int>mp2;
            mp2=mp;
            int f=0;
            for(int j=0;j<words[i].size();j++){
                if(mp2[words[i][j]]==0){
                    f=1;
                    break;
                }
                else mp2[words[i][j]]--;
            }
            if(f==0){cnt+=words[i].size();}
        }
        return cnt;
    }
};
