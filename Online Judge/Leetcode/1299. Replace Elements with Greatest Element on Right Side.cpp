class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int M=-1;
        int sz=arr.size()-1;
         vector<int>v(arr.size());
        v[sz]=-1;
        sz--;
        for(int i=arr.size()-1;i>0;i--){
            M=max(M,arr[i]);
            v[i-1]=M;
        }
        return v;
    }
};
