class MyQueue {
    stack<int>a,b;
public:
    MyQueue() {
       a=b=stack<int>();
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        int x=-1;
        while(b.empty()){
            if(a.empty())return x;
            else{
                while(!a.empty()){
                    b.push(a.top());
                    a.pop();
                }
            }
        }
         x=b.top();
        b.pop();
        return x;
    }
    
    int peek() {
        if(b.empty()){
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
        }
        return b.top();
    }
    
    bool empty() {
        return(a.empty()&&b.empty());
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