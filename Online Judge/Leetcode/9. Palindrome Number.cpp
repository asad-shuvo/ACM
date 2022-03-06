class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long int newNum = 0;
        int temp = x;
        int count=0;
        while(temp!=0){
            newNum = ((newNum*10)+(temp%10));
            temp/=10;
        }
      
        if(newNum == x)return true;
        return false;
    }
};