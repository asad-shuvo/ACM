class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0) && x!=0)return false;
        int newNum = 0;
        int count=0;
        while(x>newNum){
            newNum = (newNum*10)+(x%10);
            x/=10;
        }
      
        if(newNum == x || (x == (newNum/10))) return true;
        return false;
    }
};