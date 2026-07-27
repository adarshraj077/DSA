class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int>st;
        vector<int>ans(st.size());

        for (int x:asteroids){
            if(x<0){
                 
                 while(!st.empty() && abs(st.top())<abs(x)&& st.top() > 0){
                   
                    st.pop();
                 }
                  if (st.empty() || st.top() < 0) {
                    st.push(x);
                }
                else if (abs(st.top()) == abs(x)) {
                    st.pop();
                }

                //  if(st.empty())st.push(x);
               
            }else{
                st.push(x);
            }
        }
        while(!st.empty()){
           ans.push_back(st.top());
           st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;

    }
};