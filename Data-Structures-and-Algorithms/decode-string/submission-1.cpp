class Solution {
public:
    string decodeString(string s) {
        string ans="";
        
        stack<string>st;

       for(char x:s){
          if(x !=']'){st.push(string(1,x));}
          else{
            string substr="";
            while(st.top() !="["){
                substr=st.top()+substr;
                st.pop();
            }
            st.pop();

            string k="";
            while(!st.empty() && isdigit(st.top()[0])){
                k=st.top()+k;
                 st.pop();
            
               
            }
            int temp=stoi(k);
            while(temp){
                st.push(substr);
                temp--;
            }
          }
       }

      while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
      }
    return ans;

        
    }
};