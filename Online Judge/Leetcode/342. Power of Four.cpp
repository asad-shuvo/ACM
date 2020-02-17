class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==0)return 0;
        while(num!=1){
            if(num%4!=0){
                return 0;
            }
            else{
                num/=4;
            }
        }
        return 1;
    }
};
