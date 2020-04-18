class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int mp1[1005]={0},mp2[1005]={0};
        for(int i=0;i<arr1.size();i++){
            mp1[arr1[i]]++;
        }
        vector<int>ret;
        for(int i=0;i<arr2.size();i++){
            int t=arr2[i];
            int rep=mp1[t];
            for(int j=0;j<rep;j++){
                ret.push_back(t);
            }
            mp1[t]=0;
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            if(mp1[arr1[i]]!=0){
                ret.push_back(arr1[i]);
            }
        }
        return ret;
    }
};
