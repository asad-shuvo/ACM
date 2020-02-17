class Solution {
public:
    vector<string>ans;
    vector<string>alpha;
    int mx;
     void letterG(string c_str,int indx){
         if(c_str.size()==mx){ans.push_back(c_str);return;}
         for(int i=0;i<alpha[indx].size();i++){
             letterG(c_str+alpha[indx][i],indx+1);
         }
     }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return ans;
        mx=digits.size();
        for(int i=0;i<mx;i++){
            if(digits[i]=='1'){
                alpha.push_back("");
            }
            else if(digits[i]=='2'){
                alpha.push_back("abc");
            }
             else if(digits[i]=='3'){
                alpha.push_back("def");
            }
             else if(digits[i]=='4'){
                alpha.push_back("ghi");
            }
             else if(digits[i]=='5'){
                alpha.push_back("jkl");
            }
             else if(digits[i]=='6'){
                alpha.push_back("mno");
            }
             else if(digits[i]=='7'){
                alpha.push_back("pqrs");
            }
             else if(digits[i]=='8'){
                alpha.push_back("tuv");
            }
             else if(digits[i]=='9'){
                alpha.push_back("wxyz");
            }
        }
        string a="";
        for(int i=0;i<alpha[0].size();i++){
            letterG(a+alpha[0][i],1);
        }
        return ans;
    }
};
