class Solution {
public:
    int minAddToMakeValid(string S) {
        int cnt=0;
        stack<char>st;
        for(int i=0;i<S.size();i++){
            if(st.size()==0)st.push(S[i]);
            else{
                if(st.top()==S[i])st.push(S[i]);
                else if(st.top()=='(' and S[i]==')')st.pop();
                else if(st.top()==')' and S[i]=='(')st.push(S[i]);
            }
        }
        return st.size();
    }
};
