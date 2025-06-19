class MyStack {
public:
int size;
int t;
int * arr;
    MyStack() {
        t=-1;
        size=101;
        arr=new int[size];
    }
    
    void push(int x) {
        t++;
        arr[t]=x;
    }
    
    int pop() {
        if(t==-1) return -1;
        int p=t;
        t--;
        return arr[p];
    }
    
    int top() {
        if(t==-1) return -1;
        return arr[t];
    }
    
    bool empty() {
        if(t==-1) return 1;
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