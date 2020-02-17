class Solution {
public:
    bool repeatedSubstringPattern(string s) {
      // //  if(s.size()==1)return false;
      //  int sz=s.size();
      //   string a="";
      //   for(int i=0;i<sz/2;i++){
      //       a+=s[i];
      //       string b=a;
      //       if(sz%b.size()!=0)continue;
      //       int nd=sz/b.size();
      //       for(int j=0;j<nd-1;j++){
      //           b+=a;
      //       }
      //       if(b==s)return true;
      //   }
      //   return false;
        ///Efficient one
         vector<int>prefix(s.size());
        int index=0;
      
        for(int i=1;i<s.size();){
            if(s[index]==s[i]){
                prefix[i]=index+1;
                i++,index++;
            }
            else{
                if(index!=0){
                    index=prefix[index-1];
                }
                else{
                    prefix[i]=0;
                    i++;
                }
            }
        }
        if(prefix[s.size()-1]*2<s.size())return false;
        if(s.size()%(s.size()-prefix[s.size()-1])==0)return true;
        else return false;
    }
};
