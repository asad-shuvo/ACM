class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cnt=0,val;
        int sz=arr.size();
        for(int i=0;i<arr.size();i++){
            if(i==0){
                cnt++;
                if(cnt*4>sz){
                    return arr[i];
                    val=arr[i];
                }
                continue;
            }
            if(arr[i]!=arr[i-1]){
                 if(cnt*4>sz){
                    return arr[i-1];
                    val=arr[i-1];
                }
                cnt=1;
            }
            else{
                cnt++;
            }
        }
        if(cnt*4>sz){
                    return arr[sz-1];
                    val=arr[sz-1];
                }
        return val;
        
    }
};
