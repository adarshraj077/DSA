class Solution {
public:
    int score=0;
    stack<char>st;

    int calc(string s,int& i){
         if (i >= s.size())
            return 0;

       if(s[i]=='(' && i + 1 < s.size() &&s[i+1]=='('){
         i++;
         int x=calc(s,i);
        i++;
        return 2*x + calc(s, i);
       }else if(s[i]=='('&& s[i+1]==')'){
        i+=2;
        return 1+calc(s,i);
       }
       
       return 0;
    }
       
    int scoreOfParentheses(string s) {
      if (s.size()==2){return 1;}
      int i=0;

      return calc(s,i);


    }
};