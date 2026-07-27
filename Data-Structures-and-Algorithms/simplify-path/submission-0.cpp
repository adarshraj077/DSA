class Solution {
public:
    string simplifyPath(string path) {
        // .. ->pop()
        stringstream ss(path);
        stack<string>st;
        string token;

        while(getline(ss,token,'/')){
            if(token ==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(token.empty()||token=="."){continue;}
            else{
                st.push(token);
            }
        }

        vector<string>temp;
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        string ans;

        for(auto &dir:temp){
            ans += '/'+dir;
        }
        if(temp.empty()){
            ans='/';
        }
        return ans;
        
    }
};