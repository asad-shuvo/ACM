class Solution {
public:
    int findComplement(int num) {
        int tmp=num;
        int plc;
        for(int i=0;i<32;i++){
            if(1&(num))plc=i;
            num>>=1;
        }
        // cout<<plc<<endl;
        num=tmp;
       int mask=1;
        for(int i=0;i<plc;i++){
            mask=(mask<<1)|1;
        }
        return num^mask;
    }
};
