class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mp;
        while(n!=1){
            if(mp[n]==1){
                return false;
            }
            else{
                mp[n]=1;
            }
            int sum=0;
            while(n!=0){
                int r=n%10;
                sum+=(r*r);
                n/=10;
            }
            n=sum;
        }
        return true;
    }
};
