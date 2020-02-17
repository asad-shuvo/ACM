class MyStack {
public:
    /** Initialize your data structure here. */
    int b=-1,e=-1,arr[10000];
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if(b==-1)b++;
        e++;
        arr[e]=x;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int r=arr[e];
        e--;
        return r;
        // return arr[b];
    }
    
    /** Get the top element. */
    int top() {
        return arr[e];
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        // cout<<e<<" "<<b<<endl;
        if(b==e and e==-1)return true;
        if(b>e)return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
