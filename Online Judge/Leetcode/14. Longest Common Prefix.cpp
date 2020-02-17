class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string st="";
        if(strs.size()==0)return st;
        string tmp=strs[0];
        for(int j=0;j<tmp.size();j++){
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()==j)return st;;
            if(strs[i][j]==tmp[j]){
                if(i==strs.size()-1)st+=tmp[j];}
            else return st;
        }
        }
        return st;
    }
};
