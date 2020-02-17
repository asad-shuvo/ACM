class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        map<char,char>mp1,mp2;
        map<char,int>ss1,ss2;
        vector<string>r;
      for(int i=0;i<words.size();i++){
          mp1.clear();
          mp2.clear();
          ss1.clear();
          ss2.clear();
          if(pattern.size()!=words[i].size())continue;
          int f=0;
          for(int j=0;j<words[i].size();j++){
              if(ss1[words[i][j]]==0 and ss2[pattern[j]]==0){
                 ss1[words[i][j]]=1;
                  ss2[pattern[j]]=1;
                  mp1[words[i][j]]=pattern[j];
                  mp2[pattern[j]]=words[i][j];
                  
              }
              else if(ss1[words[i][j]]==1 and ss2[pattern[j]]==1){
                  if(mp1[words[i][j]]==pattern[j] and mp2[pattern[j]]==words[i][j]){
                      
                  }
                  else {
                      f=1;
                      break;
                  }
                  
              }
              else{
                  f=1;
                  break;
              }
             
          }
          if(f==0)
          r.push_back(words[i]);
      }
        return r;
    }
  
                     };
