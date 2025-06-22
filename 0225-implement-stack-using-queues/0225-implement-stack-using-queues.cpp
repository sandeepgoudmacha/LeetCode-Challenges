class MyStack {
public:
    queue<int>q1;
    int c=0;
    MyStack() {

    }
    
    void push(int x) {
        // q1=q2;
        q1.push(x);
        // c++;
    }
    
    int pop() {
        // q2=q1;
            queue<int>q2;
        int f=0;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        f=q1.front();
        q1.pop();
        q1=q2;
        // c--;
        return f;
    }
    
    int top() {
            queue<int>q2;
        // q2=q1;
        int f=0,i=0;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        f=q1.front();
        q2.push(f);
        q1=q2;
        return f;
    }
    
    bool empty() {
        if(q1.empty()) return 1;
        return 0;
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