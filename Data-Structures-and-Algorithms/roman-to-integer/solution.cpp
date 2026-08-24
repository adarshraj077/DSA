class Solution {
public:
    int romanToInt(string s) {
        int ans=0;

        unordered_map<char,int>coll={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };

        for(int i=0;i<s.size()-1;i++){
            if(coll[s[i]]<coll[s[i+1]]){
                ans-=coll[s[i]];
            }else{
                ans+=coll[s[i]];
            }
        }

        return ans+coll[s[s.size()-1]];
    }
};