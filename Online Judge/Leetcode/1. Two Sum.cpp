class Solution {
public:
    struct strct{
    int val;
    int index;
      //  bool operator<(const strct& rhs) const { val < rhs.val; }
    };
    
    // bool cmp(strct a,strct b){
    //     return a.val<b.val;
    // }
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
        strct arr[n];
        for(int i=0;i<nums.size();i++){
            strct tmp;
            arr[i].val=nums[i];
            arr[i].index=i;
        }
      
       
// sort(arr,arr+n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i].val<arr[j].val){
                    swap(arr[i].val,arr[j].val);
                    swap(arr[i].index,arr[j].index);
                }
            }
        }
for(int i=0;i<n;i++)cout<<arr[i].val<<endl;
        int b=0,e=nums.size()-1;
        //sort(nums.begin(),nums.end());
        vector<int>res;
        while(b<e){
            if(arr[b].val+arr[e].val==target){
                res.push_back(arr[b].index);
                res.push_back(arr[e].index);
                break;
            }
             else if(arr[b].val+arr[e].val>target){
                 e--;
                // res.push_back(arr[b].index);
                // res.push_back(arr[e].index);
            }
            else if(arr[b].val+arr[e].val<target){
                // res.push_back(arr[b].index);
                // res.push_back(arr[e].index);
            b++;
            }
            
        }
        sort(res.begin(),res.end());
        return res;
    }
};
