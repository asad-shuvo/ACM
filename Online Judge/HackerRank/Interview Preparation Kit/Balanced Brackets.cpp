#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
stack<char>st;
int f=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
        st.push(s[i]);
    }
    else{
        if(st.empty()){
            f=1;
            break;
        }
        char t=st.top();
        if(t=='(' and s[i]==')')
         st.pop();
         else if(t=='[' and s[i]==']')
          st.pop();
          else if(t=='{' and s[i]=='}')
           st.pop();
           else f=1;
        
           
    }
}
// cout<<st.size()<<endl;
 if(st.empty() and f==0)return "YES";
 else return "NO";
// return (st.size()==0 and f==0)?"YES":"NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

