class Solution {
public:
    string freqAlphabets(string s) {
        string a="";
        for(int i=0;i<s.size();i++){
            if(i+2<s.size()){
                if(s[i+2]=='#'){
                    int val=s[i]-'0';
                    cout<<val<<endl;
                    val=val*10+(s[i+1]-'0');
                    i=i+2;
                    char c='a'+(val-1);
                    a+=c;
                }
                else{
                   int val=s[i]-'0';
                    char c='a'+(val-1);
                    a+=c;
                }
            }
            else{
                 int val=s[i]-'0';
                    char c='a'+val-1;
                    a+=c;
            }
        }
        return a;
    }
};
