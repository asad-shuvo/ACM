class NumArray {
public:
    int tree[100005*4];
    vector<int>arr;
    int n;
   void init(int node,int b,int e){
        if(b==e){
            tree[node]=arr[b-1];
            return;
        }
        int mid=b+(e-b)/2;
       int left=node*2;
       int right=node*2+1;
       init(left,b,mid);
       init(right,mid+1,e);
       tree[node]=tree[left]+tree[right];
        
    }
    void Update(int node,int b,int e,int i,int val){
        if(b>i or e<i)return;
        if(b>=i and e<=i){
             tree[node]=val;
            return;
        }
         int mid=b+(e-b)/2;
       int left=node*2;
       int right=node*2+1;
        Update(left,b,mid,i,val);
         Update(right,mid+1,e,i,val);
          tree[node]=tree[left]+tree[right];
    }
    NumArray(vector<int>& nums) {
       
        arr=nums;
        n=arr.size();
         if(nums.size()!=0)
        init(1,1,n);
    }
    
    void update(int i, int val) {
        Update(1,1,n,i+1,val);
    }
    int Sum(int node,int b,int e,int i,int j){
        if(b>j or e<i)return 0;
        if(b>=i and e<=j){
            return tree[node];
        }
          int mid=b+(e-b)/2;
       int left=node*2;
       int right=node*2+1;
        int p1=Sum(left,b,mid,i,j);
        int p2=Sum(right,mid+1,e,i,j);
        return p1+p2;
    }
    int sumRange(int i, int j) {
        return Sum(1,1,n,i+1,j+1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
