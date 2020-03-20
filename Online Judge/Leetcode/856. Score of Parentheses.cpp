class Solution {
public:
    int scoreOfParentheses(string S) {
        int bal=0,ans=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='(')bal++;
            else{
                bal--;
                if(S[i-1]=='(')ans+=1<<bal;
            }
        }
        return ans;
//         stack<int>st;
//         st.push(0);
//         for(int i=0;i<S.size();i++){
//             if(S[i]=='(')st.push(0);
//             else{
                
//                 int v=st.top();
//                 st.pop();
//                 int w=st.top();
//                 st.pop();
//                 st.push(w+max(v*2,1));
//             }
//         }
//         int ret=st.top();
//         return ret;
    }
};
