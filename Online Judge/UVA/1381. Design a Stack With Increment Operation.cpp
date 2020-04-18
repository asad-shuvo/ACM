class CustomStack {
public:
    int e=-1,M;
    int arr[1005];
    CustomStack(int maxSize) {
        M=maxSize;
    }
    
    void push(int x) {
        if(e==M-1)return;
        e++;
        arr[e]=x;
    }
    
    int pop() {
        int v;
        if(e==-1)return -1;
             v=arr[e];
            e--;
        return v;
    }
    
    void increment(int k, int val) {
        int v=min(k,e+1);
       
            for(int i=0;i<v;i++){
                arr[i]+=val;
            }
        
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
