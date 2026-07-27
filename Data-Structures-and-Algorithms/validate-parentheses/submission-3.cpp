class Solution {
public:
    bool isValid(string s) {
        if(s.size()<2)return false;

        stack<char>grp;
        for(char x:s){
         if(x=='(' || x=='{' ||x=='['){
            grp.push(x);
         }else if(x==')'){
            if( grp.empty() ||grp.top() !='(' )return false;
            grp.pop();
         }else if(x=='}'){
            if( grp.empty()||grp.top() !='{')return false;
            grp.pop();
         }else if(x==']'){
            if(grp.empty() || grp.top() !='[')return false;
            grp.pop();
         }

        }

      if(grp.size())return false;
      return true;
    }
};
