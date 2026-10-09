class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int ans=0;
        int n=s.size();

        for(int i=0;i<n;i++){
           if(st.empty()&& s[i]==')'&& i+1<n&&s[i+1]==')'){
               ans++;
               i++;
           }else if( s[i]==')'&& i+1<n&&s[i+1]==')'){
            if(st.empty()){
              ans++;
            }else {
                st.pop();
            }
            i++;
           }
           else if (s[i]=='('){
            st.push(s[i]);
           }else if(s[i]==')'){
            if(st.empty()){
                ans += 2;
            }else {
                st.pop();
                ans++;
            }
           }
        }

      
    
        ans+=(2*st.size());

        return ans;

    }
};