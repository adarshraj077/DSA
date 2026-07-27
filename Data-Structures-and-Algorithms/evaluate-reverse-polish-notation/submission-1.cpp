class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int>main;
       
        
        for(string x:tokens){
            if(x=="+"){
                int a=main.top();
                main.pop();
                int b=main.top();
                main.pop();
                main.push(a+b);

            }else if(x=="*"){
                int a=main.top();
                main.pop();
                int b=main.top();
                main.pop();
                main.push(a*b);

            }else if(x=="-"){
                int a=main.top();
                main.pop();
                int b=main.top();
                main.pop();
                main.push(b-a);

            }else if(x=="/"){
                int a=main.top();
                main.pop();
                int b=main.top();
                main.pop();
                main.push(b/a);

            }else{
                main.push(stoi(x));
                
            }

        }

        return main.top();

    }
};
