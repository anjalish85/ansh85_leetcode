class MinStack {
public:
  stack<int> st,stmin;
  
  void push(int val){
    st.push(val);
    if(stmin.empty()) stmin.push(val);
    else stmin.push(min(val, stmin.top()));
  }
    
  void pop() {
    st.pop(), stmin.pop();      
  }
    
  int top() {
    return st.top();    
  }
    
  int getMin() {
    return stmin.top();      
  }
};