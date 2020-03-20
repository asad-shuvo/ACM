class Solution {
public:
    int maximum69Number (int num) {
        int cur=0;
        int cmp=num;
        int cnt=1;
        while(cmp!=0){
            int rem=cmp%10;
            if(rem==6){
               // cout<<rem<<endl;
                cur=num+cnt*3;
            }
            cmp/=10;
            cnt*=10;
        }
        if(cur>num)num=cur;
        return num;
        // return cur>num?cur:num;
    }
};
