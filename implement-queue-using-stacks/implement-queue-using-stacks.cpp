class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s;
    /** Push element x to the back of queue. */
    void push(int x) {
        pushHelp(x);
    }
    
    void pushHelp(int x){
        if(s.size()==0)
        {
            s.push(x);
            return;
        }
        
        int data;
        data=s.top();
        s.pop();
        pushHelp(x);
        s.push(data);
        return;
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int y=s.top();
        s.pop();
        return y;
    }
    
    /** Get the front element. */
    int peek() {
        return s.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return(s.size()==0);
        
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