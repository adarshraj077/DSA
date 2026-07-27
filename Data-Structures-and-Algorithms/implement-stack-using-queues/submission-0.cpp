class MyStack {
public:
      queue<int>a,b;
    MyStack() {
       
    }
    
    void push(int x) {
        a.push(x);

        while(!b.empty()){
            a.push(b.front());
            b.pop();
        }
        //b empty
        b=a;
         while(!a.empty()){
            a.pop();
        }

    }
    
    int pop() {
        int res=b.front();
        b.pop();
        return res;
    }
    
    int top() {
        return b.front();
    }
    
    bool empty() {
        if(b.empty())return true;
        return false;
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