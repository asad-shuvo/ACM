class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,d=0,l=0,r=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')u++;
            else if(moves[i]=='D')d++;
            else if(moves[i]=='L')l++;
            else r++;
        }
        if(l!=r)return false;
        if(u!=d)return false;
        return true;
        
    }
};
