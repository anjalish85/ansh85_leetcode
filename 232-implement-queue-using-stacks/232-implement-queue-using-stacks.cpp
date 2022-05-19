class MyQueue {
public:
    stack <int> si;
    stack <int> so;
    MyQueue() {
        stack <int> si;
        stack <int> so;
    }
    
    void push(int x) {
        si.push(x);
    }
    
    int pop() {
        if(!so.empty()){
            int m=so.top();
            so.pop();
            return m;
            
        }
        else{
            while(!si.empty()){
                so.push(si.top());
                si.pop();
            }
            int m=so.top();
            so.pop();
            return m;
        }
    }
    
    int peek() {
        if(!so.empty()){
            return so.top();//so.pop();
        }
        else{
            while(!si.empty()){
                so.push(si.top());
                si.pop();
            }
            return so.top();
        }
    }
    
    bool empty() {
        if(so. empty() && si.empty() )
            return 1;
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