class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)return false;
        int cnt=0;
        for(int i=0;i<32;i++){
            cnt+=(n&1);
            n>>=1;
        }
        if(cnt==1)return 1;
        else return 0;
    }
};
