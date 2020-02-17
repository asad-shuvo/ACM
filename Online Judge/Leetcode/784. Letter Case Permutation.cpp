class Solution {
public:
    vector<string>ans;
    string str;
    int mx;
    void G(int i,string c_str){
        if(c_str.size()==mx){
            ans.push_back(c_str);
            return;
        }
        if((str[i]<='z' and str[i]>='a')or(str[i]<='Z' and str[i]>='A')){
            char c1=toupper(str[i]);
            
            char c2=tolower(str[i]);
            G(i+1,c_str+c1);
            G(i+1,c_str+c2);
        }
        else G(i+1,c_str+str[i]);
    }
    vector<string> letterCasePermutation(string S) {
        mx=S.size();
        str=S;
        G(0,"");
        return ans;
    }
};
