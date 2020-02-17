class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<0)return false;
        if(n==0)return 0;
         // 3^19 = 1162261467 higest intger value of power of three,its it divisible by the number then yes
        int l=1162261467;
        if(l%n==0)return true;
        return false;
    }
};
