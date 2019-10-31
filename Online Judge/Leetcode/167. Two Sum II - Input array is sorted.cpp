class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ret;
        int b=0,e=numbers.size()-1;
        while(b<e){
            if(numbers[b]+numbers[e]==target){
                ret.push_back(b+1);
                ret.push_back(e+1);
                break;
            }
            if(numbers[b]+numbers[e]>target){
                e--;
            }
            else b++;
        }
        return ret;
    }
};
