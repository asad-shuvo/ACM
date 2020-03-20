int Solution::braces(string A) {
    stack<char>st;
    for(int i=0;i<A.size();i++){
       if(A[i]==')'){
           int cnt=0;
           while(st.top()!='('){
               cnt++;
               st.pop();
           }
           st.pop();
           if(cnt<2){
               return 1;
           }
       }
       st.push(A[i]);
    }
    return 0;
}

