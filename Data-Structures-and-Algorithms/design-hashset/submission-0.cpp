class MyHashSet {
public:
    vector<int>m;
    int size;
    MyHashSet() {
        size=1e6+1;
        m.resize(size);
        fill(m.begin(),m.end(),0);
    }
    
    void add(int key) {
        m[key]=1;
    }
    
    void remove(int key) {
        m[key]=0;
    }
    
    bool contains(int key) {
        if(m[key])return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */