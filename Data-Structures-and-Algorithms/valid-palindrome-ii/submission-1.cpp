class Solution {
public:

   bool check(string s,int left,int right){
    


      while(left<right){
        if(s[left++] != s[right--]){
            return false;
        }
      }

      return true;
   }


    bool validPalindrome(string s) {
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
            if(alnustring[left] != alnustring[right]){
                return check(alnustring,left+1,right) || check(alnustring,left,right-1);
            }
            left++;
            right--;
        }

     return true;

    
    }
};