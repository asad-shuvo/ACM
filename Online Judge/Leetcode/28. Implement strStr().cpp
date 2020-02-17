class Solution {
public:
    int pos=-1;
    vector<int> buildPrefix(string needle){
        vector<int>prefix(needle.size());
        int index=0;
        for(int i=1;i<needle.size();){
            if(needle[i]==needle[index]){
                prefix[i]=index+1;
                i++,index++;
            }
            else{
                if(index!=0){
                    index=prefix[index-1];
                }
                else {
                    prefix[i]=0;
                    i++;
                }
            }
        }
        return prefix;
    }
    int strStr(string haystack, string needle) {
        if(needle.size()==0)return 0;
        vector<int>prefix=buildPrefix(needle);
        // for(int i=0;i<prefix.size();i++){
        //     cout<<prefix[i]<<" ";
        // }
        int i=0,j=0;
        while(i<haystack.size() and j<needle.size()){
            if(haystack[i]==needle[j]){
                i++,j++;
            }
            else{
                if(j!=0)j=prefix[j-1];
                else i++;
            }
            if(j==needle.size()){
                pos=i-needle.size();
            }
        }
        return pos;
    }
};
