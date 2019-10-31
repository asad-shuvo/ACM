class Solution {
public:
    int arrangeCoins(int n) {
        int b=1,e=n;
        while(b<=e){
            long long mid=(b+(e-b)/2);
            long long sum=(mid*(mid+1))/2;
            if(sum>n){
                e=mid-1;
            }
            else if(sum<n)b=mid+1;
            else return mid;
        }
        return e;
    }
};
