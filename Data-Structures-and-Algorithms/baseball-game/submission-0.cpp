class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>group;
        stack<int>temp;
        for(string x:operations){
            if(x=="+"){
             int a=group.top();
             temp.push(group.top());
             group.pop();
             int b=group.top();
             temp.push(group.top());
             group.pop();

             while(!temp.empty()){
                group.push(temp.top());
                temp.pop();
             }
            
            group.push(a+b);


            }else if(x=="C"){
                group.pop();
            }else if(x=="D"){
                group.push(group.top()*2);
            }else{
                group.push(stoi(x));
            }
        }

        int sum=0;
        while(!group.empty()){
            sum+=group.top();
            group.pop();
        }

        return sum;

    }
};