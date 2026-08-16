struct Node {
    string url;       // The data element
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node

    // Constructor to initialize the node cleanly
    Node(string val) : url(val), next(nullptr), prev(nullptr) {}
};

class BrowserHistory {
public:
    
    Node* history ;
    Node* curr;
    BrowserHistory(string homepage) {
         history = new Node(homepage);
        curr = history;
    }
    
    void visit(string url) {
    Node* visited = new Node (url);
    curr->next=visited;
    visited->prev=curr;
    curr=curr->next;
        
    }
    
    string back(int steps) {
        
        for(int i=0;i<steps&&curr->prev;i++){
            curr=curr->prev;
        }
        return curr->url;
    }
    
    string forward(int steps) {
         for(int i=0;i<steps&&curr->next;i++){
            curr=curr->next;
        }
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */