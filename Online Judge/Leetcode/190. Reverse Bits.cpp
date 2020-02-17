class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string ret="";
        for(int i=0;i<32;i++){
        int tmp=n&1;
            ret+=to_string(tmp);
            n>>=1;
        }
        int cnt=0;
        uint32_t t=0;
        for(int i=ret.size()-1;i>=0;i--){
            if(ret[i]=='1'){
                t+=((1<<cnt)*1);
            }
            else t+=((1<<cnt)*0);
                cnt++;
        }
        return t;
    }
};
