class MyCircularQueue {
public:
    vector<int>qu;
    int front=0;
    int rear=0;
    int capacity;
    int size=0;

    MyCircularQueue(int k) {
        qu.resize(k);
        capacity=k;
    }
    
    bool enQueue(int value) {
      if(size==capacity)return false;

       
        qu[rear%capacity]=value;
        rear=(rear+1)%capacity;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(size==0)return false;
        front=(front+1)%capacity;
        size--;
     return true;
    }
    
    int Front() {
        if(size==0)return -1;
        
        return qu[front];
    }
    
    int Rear() {
        if(size==0)return -1;

        return qu[(rear-1+capacity)%capacity];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */