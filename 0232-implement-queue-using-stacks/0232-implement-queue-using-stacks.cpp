class MyQueue {
public:
stack<int>st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int>s;
        while(st.size()>1){
            s.push(st.top());
            st.pop();
        }
        int f=st.top();
        st.pop();
        while(!s.empty()){
            st.push(s.top());
            s.pop();
        }
        return f;
    }
    
    int peek() {
        stack<int>s;
        while(st.size()>1){
            s.push(st.top());
            st.pop();
        }
        int f=st.top();
        st.pop();
        s.push(f);
        while(!s.empty()){
            st.push(s.top());
            s.pop();
        }
        return f;
    }
    
    bool empty() {
        if(st.empty()) return 1;
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */