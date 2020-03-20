class Solution {
public:
    int balancedStringSplit(string s) {
        int R=0,L=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){R++;
            if(R==L){cnt++;R=0,L=0;}
                         }
            else{
                L++;
                 if(R==L){cnt++;R=0,L=0;}
            }
            
        }
        return cnt;
    }
};
