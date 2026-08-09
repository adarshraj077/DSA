class LRUCache {
public:

    list<pair<int, int>> cache;
    unordered_map<int, list<pair<int, int>>::iterator> lru;
    int cap=0;

    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
       
        if(lru.find(key) ==lru.end()){
            return -1;
        }
       auto it=lru[key];
       int value=it->second;
       cache.erase(it);
       cache.push_front({key,value});
       lru[key]=cache.begin();
        return value;
    }
    
    void put(int key, int value) {
        if(lru.find(key)!=lru.end()){
            cache.erase(lru[key]);

        }

        if(cache.size()==cap){
            auto last=cache.back();
            lru.erase(last.first);
            cache.pop_back();
        }
        cache.push_front({key,value});
        lru[key] = cache.begin();

        
        
    }
};
