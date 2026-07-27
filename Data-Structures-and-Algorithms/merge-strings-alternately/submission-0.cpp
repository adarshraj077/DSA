class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        if(s1.empty())return s2;
        if(s2.empty())return s1;
        if(s1.empty() && s2.empty())return "";

         string ans="";

         int i=0,j=0,count=0;

         while(i !=s1.size()&& j!=s2.size()){
            if(count%2==0){
                ans +=s1[i++];
            }else{
               ans+=s2[j++];
            }
            count++;

         }

         while(i !=s1.size()){ans+=s1[i++];};
          while(j !=s2.size()){ans+=s2[j++];};


         return ans;


        
    }
};