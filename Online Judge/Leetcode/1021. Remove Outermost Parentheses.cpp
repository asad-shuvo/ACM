class Solution {
public:
    string removeOuterParentheses(string S) {
        string ret="";
        stack<char>st;
        int f=0;
        for(int i=0;i<S.size();i++){
       if(S[i]=='('){if(st.empty())st.push('t');
                    else{
                        st.push('(');
                        ret+=S[i];
                    }
                    }
            else{
                if(st.top()=='('){
                    st.pop();
                  
                    ret+=")";
                }
                else{
                    st.pop();
                }
            }
        }
        return ret;
    }
};
