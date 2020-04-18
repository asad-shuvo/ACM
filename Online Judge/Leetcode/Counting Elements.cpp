class Solution {
public:
    int countElements(vector<int>& arr) {
        int a[1005]={0};
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        int cnt=0;
        for(int i=0;i<=1000;i++){
            if(a[i]>0 and a[i+1]>0){
               // cout<<i<<" "<<a[i]<<" "<<i+1<<" "<<a[i+1]<<" "<<a[i]*a[i+1]<<endl;
                cnt+=(a[i]);
            }
        }
        return cnt;
    }
};
