class Solution {
public:
    string generateTheString(int n) {
        string a="";
        
        if(n==1)return "a";
        for(int i=1;i<n;i++){
            a+='a';
        }
        if(n%2==1){
            a+='a';
        }
        else a+='b';
        
        return a;
    }
};
