class Solution {
public:
    int compress(vector<char>& chars) {
     //   chars.push_back('#');
        int cnt=0,cn=0;
        char match=chars[0];
        for(int i=0;i<chars.size();i++){
            if(chars[i]==match){
                cnt++;
            }
            else{
               // cout<<cnt<<endl;
                if(cnt==1){
                    chars[cn]=match;
                    cn++;
                }
                else{
                    chars[cn]=match;
                    cn++;
                    string rev=to_string(cnt);
                  //  reverse(rev.begin(),rev.end());
                    for(int i=0;i<rev.size();i++){
                        chars[cn]=rev[i];
                        cn++;
                    }
                  
                }
                cnt=1;
                 match=chars[i];
            }
        }
            if(cnt==1){
                    chars[cn]=match;
                    cn++;
                }
                else{
                    chars[cn]=match;
                    cn++;
                    string rev=to_string(cnt);
                  //  reverse(rev.begin(),rev.end());
                    for(int i=0;i<rev.size();i++){
                        chars[cn]=rev[i];
                        cn++;
                    }
                  
                }
               
        return cn;
    }
};
