class Solution {
public:
    bool isPalindrome(string s) {
        string alnustring="";
        //getting only alnum
        for(char x:s){
          if(isalnum(x)){
            alnustring+=tolower(x);
          }
        }
        // 
        int left=0,right=alnustring.size()-1;


        while(left<right){
             if(alnustring[left++] !=alnustring[right--]){
                return false;
            }
        }

     return true;
    }
};
