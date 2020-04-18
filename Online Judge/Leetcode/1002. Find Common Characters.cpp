class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        map<char,int>mp2,mp3;
        for(int i=0;i<A.size();i++){
            map<char,int>mp1;
            string a=A[i];
            for(int j=0;j<a.size();j++){
                mp1[a[j]]++;
            }
            char c='a';
             for(int j=0;j<26;j++){
                 if(mp1[c+j]>0)
                mp2[c+j]++;
            }
            c='a';
            for(int j=0;j<26;j++){
                if(mp2[c+j]==i+1){
                    if(i==0){
                        mp3[c+j]=mp1[c+j];
                    }
                    else{
                        mp3[c+j]=min(mp3[c+j],mp1[c+j]);
                    }
                }
                else mp3[c+j]=0;
            }
        }
        char c='a';
         vector<string>ret;
        for(int i=0;i<26;i++){
          //  cout<<mp3[c+i]<<endl;
            if(mp3[c+i]>0){
                string a="";
                a+=c+i;
                int k=mp3[c+i];
                for(int z=0;z<k;z++)
                ret.push_back(a);
            }
            // cout<<mp3[c+i]<<endl;
        }
        // vector<string>ret;
        return ret;
    }
};
