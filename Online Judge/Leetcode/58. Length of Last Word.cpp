class Solution {
public:
    int lengthOfLastWord(string s) {
      int cnt=0,cn=0;
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' and cnt>0)break;
            if(isalnum(s[i]))cnt++;
            // else cnt++;
        }
        return cnt;
    }
};
