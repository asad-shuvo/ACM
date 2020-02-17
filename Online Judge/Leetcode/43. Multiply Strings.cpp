class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1.size()==0 or num2.size()==0)return "0";
        int itr1=0,itr2=0;
        vector<int>res(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;i--){
            itr2=0;
            int carry=0,val=num1[i]-'0';
            for(int j=num2.size()-1;j>=0;j--){
                int val2=num2[j]-'0';
                int sum=val*val2+res[itr1+itr2]+carry;
                res[itr1+itr2]=sum%10;
                carry=sum/10;
                itr2++;
            }
            if(carry>0)res[itr1+itr2]+=carry;
            itr1++;
        }
        int i=res.size()-1;
        while(i>=0 and res[i]==0)i--;
        if(i==-1)return "0";
        string s="";
        while(i>=0){
            s+=to_string(res[i--]);
        }
        return s;
    }
};
