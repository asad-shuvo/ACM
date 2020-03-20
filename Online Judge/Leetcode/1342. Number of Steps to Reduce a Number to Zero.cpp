class Solution {
public:
    int numberOfSteps (int num) {
        int cnt=0;
        while(num!=0){
            cnt++;
            if(num & 1==1){
                num=(num&~(1<<0));
            }
            else{
                num>>=1;
            }
          //  cout<<num<<endl;
        }
        return cnt;
    }
};
