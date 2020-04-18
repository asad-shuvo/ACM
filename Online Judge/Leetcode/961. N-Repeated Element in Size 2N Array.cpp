class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int arr[10005]={0};
        for(int i=0;i<A.size();i++){
            arr[A[i]]++;
            if(arr[A[i]]==A.size()/2)return A[i];
        }
        return 1;
    }
};
