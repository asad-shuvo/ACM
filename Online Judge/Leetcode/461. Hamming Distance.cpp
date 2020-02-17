class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        x=x xor y;
        for(int i=0;i<32;i++){
            int t=1&x;
           
            if(t==1)cnt++;
            x>>=1;
           
        }
        return cnt;
    }
};
