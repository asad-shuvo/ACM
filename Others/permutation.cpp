 vector<vector<int>>ret;
    void permute(vector<int>& a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        ret.push_back(a);  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
    vector<vector<int>> permute(vector<int>& nums) {
        permute(nums,0,nums.size()-1);
        return ret;
    }
