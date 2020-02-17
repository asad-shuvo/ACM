class Solution {
public:
    bool hasAlternatingBits(int n) {
        int f=0,carry;
        int tmp=n;
        int cnt=0;
        while(tmp){
            tmp>>=1;
            cnt++;
        }
        //cout<<cnt<<endl;
        for(int i=0;i<cnt;i++){
            if(i==0){
                int tmp=(1&(n));
                if(tmp==1){
                    carry=1;
                }
                else carry=0;
                n>>=1;
                continue;
            }
            int tmp=(1&(n));
            if(tmp==carry)return false;
           carry=tmp;
           
                n>>=1;
        }
        return true;
    }
};
