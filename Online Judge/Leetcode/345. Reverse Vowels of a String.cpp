class Solution {
public:
    bool isV(char c){
        if(c=='a' or c=='A' or c=='e' or c=='E' or c=='i' or c=='I' or c=='o' or c=='O' or c=='u' or c=='U')return true;
        return false;
    }
    string reverseVowels(string s) {
        int b=0,e=s.size()-1;
        for(int i=0;i<s.size();i++){
            if(b>=e)break;
            if(isV(s[i])){
                b=i;
                for(int j=e;j>=0;j--){
                   // cout<<s[i]<<" "<<s[j]<<endl;
                    if(isV(s[j])){
                        e=j;
                        swap(s[b],s[e]);
                        e--;
                        break;
                    }
                }
            }
            else{
                b++;
            }
            
        }
        return s;
    }
};
