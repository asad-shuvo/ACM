class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt=0;
        for(int i=0;i<arr1.size();i++){
            int b=0,e=arr2.size()-1;
            int f=0;
            while(b<=e){
                int m=b+(e-b)/2;
                int k=abs(arr1[i]-arr2[m]);
                if(k<=d){
                    f=1;
                    break;
                }
                if(arr2[m]>arr1[i]){
                    e=m-1;
                }
                if(arr2[m]<arr1[i]){
                    b=m+1;
                }
            }
            if(f==0)cnt++;
        }
        return cnt;
    }
};
