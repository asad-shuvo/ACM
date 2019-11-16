class Solution {
public:
    bool isPalindrome(string s) {
        string ret="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                ret+=toupper(s[i]);
            }
        }
    string b=ret;
        reverse(b.begin(),b.end());
        if(ret==b)return true;
        else return false;
    }
};
