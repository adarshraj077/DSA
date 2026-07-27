class MinStack {
public:
     vector<int>arr;
        vector<int>minat;
        int front=-1;

    MinStack() {
       
    }
    
    void push(int val) {
        arr.push_back(val);
        
        front++;
        if(front==0)minat.push_back(val);else{
            minat.push_back(min(arr[front],minat[front-1]));
        }
    }
    
    void pop() {
        if(front==-1)return;
        arr.erase(arr.begin()+front);
        minat.erase(minat.begin()+front);
        front--;
    }
    
    int top() {
        return arr[front];
    }
    
    int getMin() {
        return minat[front];
        
    }
};
