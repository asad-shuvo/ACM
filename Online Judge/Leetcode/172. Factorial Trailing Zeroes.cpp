class Solution {
public:
    int trailingZeroes(int n) {
     long long cnt=5;
        int sum=0;
        while(cnt<=n){
            sum+=(n/cnt);
            cnt*=5;
        }
        return sum;
    }
};
