stack<int>st;
stack<int>minStack;
MinStack::MinStack() {
      while(!st.empty()){
        st.pop();
    }
    while(!minStack.empty()){
        minStack.pop();
    }
}

void MinStack::push(int x) {
    st.push(x);
    if(minStack.empty()){minStack.push(x);return;}
    
    if(minStack.top()>x){
        minStack.push(x);
    }
    else{
        minStack.push(minStack.top());
    }
}

void MinStack::pop() {
    if(!st.empty()){
        st.pop();
        minStack.pop();
    }
}

int MinStack::top() {
    if(!st.empty()){
        return st.top();
    }
    else return -1;
}

int MinStack::getMin() {
    if(!minStack.empty())return minStack.top();
    else return -1;
}


