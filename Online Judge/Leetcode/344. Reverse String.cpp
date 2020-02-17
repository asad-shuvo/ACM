class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        while(i<j){
            int t=s[i];
            s[i]=s[j];
            s[j]=t;
            i++,j--;
        }
        for(int i=0;i<s.size();i++)cout<<s[i]<<" ";
    }
};
