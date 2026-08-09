class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};


class MyLinkedList {
public:
    
    int idx;
    Node *head=nullptr;
    Node *tail=nullptr;
    int size;
    
    MyLinkedList() {
        idx=0;
        size=0;
    }
    
    int get(int index) {
       if(index==0){return head->val;}
       else if(index==size-1){return tail->val;}
       else if(index<0 ||index>=size){
        return -1;
       }else{

        Node *curr=head;
        int count=0;
        while(count!=index){
          count++;
          curr=curr->next;
        }
         return curr->val;
       }
       return 0;
    }

    
    void addAtHead(int val) {
        Node *newnode=new Node(val);
       if(size==0){head = tail = newnode;}
        else{newnode->next=head;
        head=newnode;}
        size++;
    }
    
    void addAtTail(int val) {
        Node*temp =new Node(val);
        if(size==0){head = tail = temp;}
        else{tail->next=temp; tail=temp;}
        size++;
    }
    
    void addAtIndex(int index, int val) {
      if(index<0 || index>size) return;
    else if(index==0 ){
         addAtHead(val);
         return;
    }else if(index==size){
        addAtTail(val);
        return;
    }else {
     Node *temp=new Node(val);
     Node* t = head;
        for(int i=0;i<index-1;i++){
            t = t->next;
        }
        temp->next = t->next;
        t->next = temp;
        size++;


    }

    }
    
    void deleteAtIndex(int index) {
          if(index<0 || index>=size) return;
        else if(index == 0){
            head = head->next;
            size--;
            return;
        }
        else if(index==size-1){
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
        else{
            Node* temp = head;
            for(int i=1;i<=index-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next; 
            size--;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */