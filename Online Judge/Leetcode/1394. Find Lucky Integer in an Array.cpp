class Solution {
public:
    int findLucky(vector<int>& arr) {
        int a[501]={0};
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        int M=-1;
        for(int i=0;i<arr.size();i++){
            if(a[arr[i]]==arr[i]){
                M=max(M,arr[i]);
            }
        }
        return M;
    }
};
