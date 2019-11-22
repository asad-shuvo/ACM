class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]==')'){
                if(st.empty())st.push(i);
                else{
                    if(s[st.top()]=='(' and s[i]==')'){
                        st.pop();
                    }
                    else st.push(i);
                }
            }
        }
        string r="";
        int pl=-1;
        if(!st.empty()){
            pl=st.top();
            st.pop();
        }
        for(int i=s.size()-1;i>=0;i--){
            if(pl==i){
                if(!st.empty()){
            pl=st.top();
            st.pop();
        }
                continue;
            }
            else r+=s[i];
        }
        reverse(r.begin(),r.end());
        return r;
    }
};
