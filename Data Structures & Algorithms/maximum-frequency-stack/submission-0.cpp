class FreqStack {
public:
    vector<int>st;
    FreqStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    int pop() {
        // get the top element 
       unordered_map<int,int>freq;
        //get the most frew element 
        for(int x:st){
             freq[x]++;
        }
        
        int max_element=0;

        for(auto &p:freq){
          max_element=max(max_element,p.second);
        }
        //

        for(int i=st.size()-1;i>=0;i--){
            if(freq[st[i]]==max_element){
                int ans=st[i];
                st.erase(st.begin() + i);
                return ans;
            }
        }

        return -1;
       
     
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */