class MinStack {
public:
    // int mini=INT_MAX;
    stack<int>st;
    stack<int>prevMin;
    MinStack() {
        
    }
    int c=0;
    void push(int val) {
        st.push(val);
        if(prevMin.empty() || prevMin.top()>=val){
            // mini=val;
            prevMin.push(val);
        }
    }
    
    void pop() {
        if (st.empty()) return;
        if(st.top()==prevMin.top()){
            prevMin.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return prevMin.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */