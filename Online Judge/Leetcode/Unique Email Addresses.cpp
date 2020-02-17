class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string,int>mp;
        int cnt=0;
        for(int i=0;i<emails.size();i++){
            string b="";
            int f=0,dot=0;
            for(int j=0;j<emails[i].size();j++){
                if(emails[i][j]=='.' and dot==0){
                    continue;
                }
                else if(emails[i][j]=='.' and dot==1){
                    b+=emails[i][j];
                    continue;
                }
                if(emails[i][j]=='+'){
                    f=1;
                    continue;
                }
              else if(emails[i][j]=='@'){
                    f=0;
                    dot=1;
                    b+=emails[i][j];
                    continue;
                }
                else{
                    if(f==0){
                        b+=emails[i][j];
                    }
                }
            }
            if(mp[b]==0){
                cnt++;
                mp[b]=1;
            }
        }
        return cnt;
    }
};
