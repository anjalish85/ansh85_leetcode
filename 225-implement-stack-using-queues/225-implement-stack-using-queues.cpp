class MyStack {
    queue<int> primary;
    queue<int> sec;
    public:
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        primary.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        
        int res;
        while(!primary.empty())
        {
            if(primary.size() == 1)
                res = primary.front();
            else
                sec.push(primary.front());
            primary.pop();
        }
        
        sec.swap(primary);
        return res;
    }
    
    /** Get the top element. */
    int top() {
        
        int res;
        while(!primary.empty())
        {
            if(primary.size() == 1)
                res = primary.front();
            
            sec.push(primary.front());
            primary.pop();
        }  
        
        sec.swap(primary);
        return res;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return (primary.empty());
    }
};
