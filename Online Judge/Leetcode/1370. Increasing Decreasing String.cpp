class Solution {
public:
    string sortString(string s) {
        string a="";
        int arr[26]={0};
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        
        int cnt=1;
        while(1){
            int f=0;
            if(cnt%2==1){
                for(int i=0;i<26;i++){
                    if(arr[i]>0){
                        a+=('a'+i);
                        arr[i]--;
                        f++;
                    }
                }
            }
            else{
                 for(int i=25;i>=0;i--){
                    if(arr[i]>0){
                        a+=('a'+i);
                        arr[i]--;
                        f++;
                    }
                }
            }
            cnt++;
            if(f==0)break;
        }
        return a;
    }
};
