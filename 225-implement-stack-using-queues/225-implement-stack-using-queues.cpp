class MyStack {
    queue<int>a;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        a.push(x);
        for(int i=1;i<a.size();i++){
            a.push(a.front());
            a.pop();
        }
    }
    
  int pop() {
        int first = a.front();
        a.pop();
        
        return first;
    }
    
    int top() {
      return a.front();  
    }
    
    bool empty() {
     return(a.empty());
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